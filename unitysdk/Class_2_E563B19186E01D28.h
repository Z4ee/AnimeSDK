#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfKill; }

#define CLASS_2_E563B19186E01D28_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x169DF790)
#define CLASS_2_E563B19186E01D28_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x169DF9D0)
#define CLASS_2_E563B19186E01D28_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x169DFA70)
#define CLASS_2_E563B19186E01D28_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169DFA30)
#define CLASS_2_E563B19186E01D28__CTOR_OFFSET UNITYSDK_OFFSET(0x169DF700)

inline static constexpr unsigned int Class_2_E563B19186E01D28_TypeDefinitionIndex = 73958;

class Class_2_E563B19186E01D28 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_SelfKill* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_E563B19186E01D28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E563B19186E01D28_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
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
