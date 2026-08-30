#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_612A31ADF7B3C1E2_OFFSET UNITYSDK_OFFSET(0x1D82A080)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_F859538F95DF99E6_OFFSET UNITYSDK_OFFSET(0x1D828550)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D828540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasModifier_TypeDefinitionIndex = 15916;

	class DiceCombatPredicateConfig_HasModifier : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::UInt32 ModifierID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_612A31ADF7B3C1E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_612A31ADF7B3C1E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F859538F95DF99E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_F859538F95DF99E6_OFFSET))(a1, a2);
		}
	};
}
