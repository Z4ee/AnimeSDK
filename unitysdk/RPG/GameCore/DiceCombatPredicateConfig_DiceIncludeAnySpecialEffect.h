#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_355B2EE809AD3D13_OFFSET UNITYSDK_OFFSET(0x1C116430)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_8974738B55CC5492_OFFSET UNITYSDK_OFFSET(0x1C113C90)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C113C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect_TypeDefinitionIndex = 15493;

	class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_355B2EE809AD3D13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_355B2EE809AD3D13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8974738B55CC5492(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_8974738B55CC5492_OFFSET))(a1, a2);
		}
	};
}
