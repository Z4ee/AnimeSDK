#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_WaitTime; }

#define CLASS_2_4375DD5C06C4A8C3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1919D140)
#define CLASS_2_4375DD5C06C4A8C3_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x1919CFD0)
#define CLASS_2_4375DD5C06C4A8C3_METHOD_2_AF7059E51FAB028F_OFFSET UNITYSDK_OFFSET(0x1919D0A0)
#define CLASS_2_4375DD5C06C4A8C3_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1919D100)
#define CLASS_2_4375DD5C06C4A8C3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1919CF80)
#define CLASS_2_4375DD5C06C4A8C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1919CEF0)

inline static constexpr unsigned int Class_2_4375DD5C06C4A8C3_TypeDefinitionIndex = 77446;

class Class_2_4375DD5C06C4A8C3 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_WaitTime* FLCJGKLKHME; // 0x28
	::System::Single COCJDAKNIAP; // 0x30

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_4375DD5C06C4A8C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4375DD5C06C4A8C3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4375DD5C06C4A8C3_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Single Method_2_AF7059E51FAB028F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4375DD5C06C4A8C3_METHOD_2_AF7059E51FAB028F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4375DD5C06C4A8C3_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4375DD5C06C4A8C3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
