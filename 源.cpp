//四则运算，张莹荧
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void DealFenshu(int m, int a[][2])
{
	for (int p = 0; p<m; p++)
	{
		int i = (int)rand() % 100;
		int j = (int)rand() % 100;
		while (j == 0 || i >= j)
		{
			i = (int)rand() % 100;
			j = (int)rand() % 100;
		}
		int x = (int)rand() % 100;
		int y = (int)rand() % 100;
		while (y == 0 || x >= y)
		{
			x = (int)rand() % 100;
			y = (int)rand() % 100;
		}
		int k = (int)rand() % 100 / 25;
		switch (k)
		{
		case 0:
			cout << "(" << i << "/" << j << ")" << "+" << "(" << x << "/" << y << ")" << "=" << endl;
			a[p][0] = i*y + x*j;
			a[p][1] = j*y;
			break;
		case 1:
			cout << "(" << i << "/" << j << ")" << "-" << "(" << x << "/" << y << ")" << "=" << endl;
			a[p][0] = i*y - x*j;
			a[p][1] = j*y;
			break;
		case 2:
			cout << "(" << i << "/" << j << ")" << "*" << "(" << x << "/" << y << ")" << "=" << endl;
			a[p][0] = i*x;
			a[p][1] = j*y;
			break;
		case 3:
			a[p][0] = i*y;
			a[p][1] = j*x;
			cout << "(" << i << "/" << j << ")" << "/" << "(" << x << "/" << y << ")" << "=" << endl;
		}
	}
}

void DealInt(int m, int a[])
{

	for (int p = 0; p<m; p++)
	{
		int i = (int)rand() % 100;
		int j = (int)rand() % 100;
		int k = (int)rand() % 100 / 25;
		switch (k)
		{
		case 0:
			cout << i << "＋" << j << "=" << endl;
			a[p] = i + j;
			break;
		case 1:
			cout << i << "－" << j << "=" << endl;
			a[p] = i - j;
			break;
		case 2:
			cout << i << "×" << j << "=" << endl;
			a[p] = i*j;
			break;
		case 3:
			try
			{
				a[p] = i / j;
				cout << i << "÷" << j << "=" << endl;
			}
			catch (...)
			{
				p--;
			}
		}

		
	}
}

void main()
{
	int p;
	do
	{
		system("cls");
		int a[1000], b[1000][2];
		int m, n;
		cout << "请输入生成的四则运算题个数：";
		cin >> m;
		cout << endl;
		cout << "请输入要生成的四则运算种类(输入1为整数，输入2为真分数):";
		cin >> n;
		cout << endl;
		if (n == 1)
		{
			DealInt(m, a);
			cout << endl;
		}
		else
		{
			DealFenshu(m, b);
			cout << endl;
		}
		cout << "是否继续生成运算题(生成请输入‘1’，否则输入‘0’)" << endl;
		cin >> p;
		cout << endl;
	} while (1 == p);
}