#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C77286410A56895E.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_63D18ECF87218619_1;

#define CLASS_4_A465EE7723DAEACA_METHOD_4_360F447C9A34EB99_OFFSET UNITYSDK_OFFSET(0xB97CD00)
#define CLASS_4_A465EE7723DAEACA_METHOD_4_86E5BAC73570DA03_OFFSET UNITYSDK_OFFSET(0xB97CDD0)
#define CLASS_4_A465EE7723DAEACA_METHOD_4_F385090BF8DD2EE6_1_OFFSET UNITYSDK_OFFSET(0xB97CE90)
#define CLASS_4_A465EE7723DAEACA_METHOD_4_F385090BF8DD2EE6_OFFSET UNITYSDK_OFFSET(0xB97CD70)
#define CLASS_4_A465EE7723DAEACA_METHOD_4_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xB97CEF0)
#define CLASS_4_A465EE7723DAEACA__CTOR_OFFSET UNITYSDK_OFFSET(0xB97CF00)

inline static constexpr unsigned int Class_4_A465EE7723DAEACA_TypeDefinitionIndex = 76326;

class Class_4_A465EE7723DAEACA : public ::Class_3_C77286410A56895E
{
public:
	::System::Int32 KBCOCDEMJDC; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A465EE7723DAEACA__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_360F447C9A34EB99(::Class_1_63D18ECF87218619_1* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_A465EE7723DAEACA_METHOD_4_360F447C9A34EB99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F385090BF8DD2EE6(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_A465EE7723DAEACA_METHOD_4_F385090BF8DD2EE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_86E5BAC73570DA03(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_A465EE7723DAEACA_METHOD_4_86E5BAC73570DA03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F385090BF8DD2EE6_1(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_A465EE7723DAEACA_METHOD_4_F385090BF8DD2EE6_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_4_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A465EE7723DAEACA_METHOD_4_F48B6E9D83D3B226_OFFSET))(this);
	}
};
