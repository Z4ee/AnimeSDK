#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfKill; }

#define CLASS_2_E563B19186E01D28_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB9DD3E0)
#define CLASS_2_E563B19186E01D28_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB9DD4C0)
#define CLASS_2_E563B19186E01D28_METHOD_2_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0xB9DCFA0)
#define CLASS_2_E563B19186E01D28_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB9DD480)
#define CLASS_2_E563B19186E01D28_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9DD440)
#define CLASS_2_E563B19186E01D28__CTOR_OFFSET UNITYSDK_OFFSET(0xB9DCF10)

inline static constexpr unsigned int Class_2_E563B19186E01D28_TypeDefinitionIndex = 72433;

class Class_2_E563B19186E01D28 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_SelfKill* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_E563B19186E01D28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E563B19186E01D28_METHOD_2_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E563B19186E01D28_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E563B19186E01D28_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E563B19186E01D28_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E563B19186E01D28_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
