#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap; }

#define CLASS_2_A123FE83879E3B5B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17DBDEF0)
#define CLASS_2_A123FE83879E3B5B__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBDEE0)

inline static constexpr unsigned int Class_2_A123FE83879E3B5B_TypeDefinitionIndex = 34088;

class Class_2_A123FE83879E3B5B : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_A123FE83879E3B5B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A123FE83879E3B5B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
