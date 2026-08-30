#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_32B3FE2FD3EEDB80.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_63D18ECF87218619_1;
class Class_1_BAF6F107F0961F34;
class Class_2_1A8148841049062A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4CB32DEBF4243416_METHOD_3_4D6C5F6A9C5D13C1_OFFSET UNITYSDK_OFFSET(0xBB36AE0)
#define CLASS_3_4CB32DEBF4243416_METHOD_3_86E5BAC73570DA03_OFFSET UNITYSDK_OFFSET(0xBB37550)
#define CLASS_3_4CB32DEBF4243416_METHOD_3_BCF43D4317A97D4C_OFFSET UNITYSDK_OFFSET(0xBB37600)
#define CLASS_3_4CB32DEBF4243416_METHOD_3_E08D45F1BEDD78A7_OFFSET UNITYSDK_OFFSET(0xBB36A90)
#define CLASS_3_4CB32DEBF4243416_METHOD_3_F385090BF8DD2EE6_OFFSET UNITYSDK_OFFSET(0xBB37810)
#define CLASS_3_4CB32DEBF4243416_METHOD_3_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xBB37870)
#define CLASS_3_4CB32DEBF4243416__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB378D0)
#define CLASS_3_4CB32DEBF4243416__CTOR_OFFSET UNITYSDK_OFFSET(0xBB37880)

inline static constexpr unsigned int Class_3_4CB32DEBF4243416_TypeDefinitionIndex = 76322;

class Class_3_4CB32DEBF4243416 : public ::Class_2_32B3FE2FD3EEDB80
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>** StaticGet_JEFABMFHDJI()
	{
		return (::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4CB32DEBF4243416_TypeDefinitionIndex)->GetStaticField(0x606A0);
	}
	::System::Boolean DBGLCEJMNFF; // 0xA8
	::RPG::Client::LittleGame::Move::MoveState ACHIDNBOBLA; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416__CCTOR_OFFSET))();
	}

	::System::Void Method_3_E08D45F1BEDD78A7(::Class_1_BAF6F107F0961F34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAF6F107F0961F34*))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416_METHOD_3_E08D45F1BEDD78A7_OFFSET))(this, a1);
	}

	::System::Void Method_3_4D6C5F6A9C5D13C1(::Class_1_63D18ECF87218619_1* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416_METHOD_3_4D6C5F6A9C5D13C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_86E5BAC73570DA03(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416_METHOD_3_86E5BAC73570DA03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCF43D4317A97D4C(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416_METHOD_3_BCF43D4317A97D4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F385090BF8DD2EE6(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416_METHOD_3_F385090BF8DD2EE6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_3_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416_METHOD_3_F48B6E9D83D3B226_OFFSET))(this);
	}
};
