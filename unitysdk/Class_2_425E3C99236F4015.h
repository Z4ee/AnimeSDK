#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerDiceUpgrade; }

#define CLASS_2_425E3C99236F4015_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1AAFDA80)
#define CLASS_2_425E3C99236F4015__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFDA70)

inline static constexpr unsigned int Class_2_425E3C99236F4015_TypeDefinitionIndex = 35642;

class Class_2_425E3C99236F4015 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_425E3C99236F4015__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_425E3C99236F4015_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}
};
