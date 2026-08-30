#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ShowTalk; }

#define CLASS_2_21503E844DAFEDB1_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1A8DF400)
#define CLASS_2_21503E844DAFEDB1_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1A8DF320)
#define CLASS_2_21503E844DAFEDB1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A8DF3C0)
#define CLASS_2_21503E844DAFEDB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DF2A0)

inline static constexpr unsigned int Class_2_21503E844DAFEDB1_TypeDefinitionIndex = 77449;

class Class_2_21503E844DAFEDB1 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_ShowTalk* OFGFLFEBPJM; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_21503E844DAFEDB1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21503E844DAFEDB1_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21503E844DAFEDB1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_21503E844DAFEDB1_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
