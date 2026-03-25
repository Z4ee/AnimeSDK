#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupStateType.h"

class Class_0_16E4307DCC419505_375;
class Class_1_F44524D91BEABB41_1;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3FFC9E2A64DB7F5F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11800420)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x11800370)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x118005B0)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_272068886DA88B16_OFFSET UNITYSDK_OFFSET(0x118009C0)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x11800B10)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x11800970)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x117F6E70)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x11800BD0)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_C886532D02F6AF70_OFFSET UNITYSDK_OFFSET(0x11800730)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_D3CB18105BA9D504_OFFSET UNITYSDK_OFFSET(0x117F39B0)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_E70E7CFB1DF7C909_OFFSET UNITYSDK_OFFSET(0x11800BC0)
#define CLASS_2_3FFC9E2A64DB7F5F_TICK_OFFSET UNITYSDK_OFFSET(0x11800550)
#define CLASS_2_3FFC9E2A64DB7F5F__CTOR_OFFSET UNITYSDK_OFFSET(0x11800BE0)
#define CLASS_2_3FFC9E2A64DB7F5F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11800C60)

inline static constexpr unsigned int Class_2_3FFC9E2A64DB7F5F_TypeDefinitionIndex = 45948;

class Class_2_3FFC9E2A64DB7F5F : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F44524D91BEABB41_1*>* Field_2_0; // 0x20
	::RPG::GameCore::GroupStateType Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C886532D02F6AF70(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_C886532D02F6AF70_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3CB18105BA9D504(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_D3CB18105BA9D504_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_272068886DA88B16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_272068886DA88B16_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::RPG::GameCore::GroupStateType Method_2_E70E7CFB1DF7C909()
	{
		return ((::RPG::GameCore::GroupStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_E70E7CFB1DF7C909_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
