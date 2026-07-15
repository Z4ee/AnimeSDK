#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_ChallengerRevival; }

#define CLASS_2_82F1AAE4E1A8FC84_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x17B86DE0)
#define CLASS_2_82F1AAE4E1A8FC84__CTOR_OFFSET UNITYSDK_OFFSET(0x17B86DD0)

inline static constexpr unsigned int Class_2_82F1AAE4E1A8FC84_TypeDefinitionIndex = 34784;

class Class_2_82F1AAE4E1A8FC84 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_82F1AAE4E1A8FC84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F1AAE4E1A8FC84_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}
};
