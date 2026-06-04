#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Attack; }

#define CLASS_2_01F75749197A064A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA6B21F0)
#define CLASS_2_01F75749197A064A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA6B2290)
#define CLASS_2_01F75749197A064A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA6B22F0)
#define CLASS_2_01F75749197A064A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6B2250)
#define CLASS_2_01F75749197A064A_METHOD_2_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0xA6B1D80)
#define CLASS_2_01F75749197A064A__CTOR_OFFSET UNITYSDK_OFFSET(0xA6B1CF0)

inline static constexpr unsigned int Class_2_01F75749197A064A_TypeDefinitionIndex = 72412;

class Class_2_01F75749197A064A : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_Attack* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_01F75749197A064A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E11BF4997198DC1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F75749197A064A_METHOD_2_E11BF4997198DC1F_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_01F75749197A064A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F75749197A064A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F75749197A064A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F75749197A064A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
