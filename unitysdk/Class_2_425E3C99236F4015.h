#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerDiceUpgrade; }

#define CLASS_2_425E3C99236F4015_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x1670F3B0)
#define CLASS_2_425E3C99236F4015__CTOR_OFFSET UNITYSDK_OFFSET(0x1670F3A0)

inline static constexpr unsigned int Class_2_425E3C99236F4015_TypeDefinitionIndex = 28445;

class Class_2_425E3C99236F4015 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_425E3C99236F4015__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_425E3C99236F4015_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}
};
