#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_InsertAbility; }
namespace System { class String; }

#define CLASS_2_B5DB04A6D2546EAC_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x165F72D0)
#define CLASS_2_B5DB04A6D2546EAC_METHOD_2_5618393A9C06010C_OFFSET UNITYSDK_OFFSET(0x165F73F0)
#define CLASS_2_B5DB04A6D2546EAC__CTOR_OFFSET UNITYSDK_OFFSET(0x165F72C0)

inline static constexpr unsigned int Class_2_B5DB04A6D2546EAC_TypeDefinitionIndex = 28431;

class Class_2_B5DB04A6D2546EAC : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_B5DB04A6D2546EAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5DB04A6D2546EAC_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatInsertAbilityConfig* Method_2_5618393A9C06010C(::System::String* a1)
	{
		return ((::RPG::GameCore::DiceCombatInsertAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5DB04A6D2546EAC_METHOD_2_5618393A9C06010C_OFFSET))(this, a1);
	}
};
