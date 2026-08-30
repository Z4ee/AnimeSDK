#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfKill; }

#define CLASS_2_E563B19186E01D28_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xCF9B250)
#define CLASS_2_E563B19186E01D28_METHOD_2_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0xCF9AE00)
#define CLASS_2_E563B19186E01D28_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCF9B2F0)
#define CLASS_2_E563B19186E01D28_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCF9B2B0)
#define CLASS_2_E563B19186E01D28__CTOR_OFFSET UNITYSDK_OFFSET(0xCF9AD70)

inline static constexpr unsigned int Class_2_E563B19186E01D28_TypeDefinitionIndex = 77443;

class Class_2_E563B19186E01D28 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_SelfKill* OHGCCCIFAMP; // 0x28

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
};
