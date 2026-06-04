#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_8974738B55CC5492_OFFSET UNITYSDK_OFFSET(0x196ABC70)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_9F587CCB7DD94000_OFFSET UNITYSDK_OFFSET(0x196AEB50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x196ABC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect_TypeDefinitionIndex = 15329;

	class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9F587CCB7DD94000(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_9F587CCB7DD94000_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8974738B55CC5492(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_8974738B55CC5492_OFFSET))(a1, a2);
		}
	};
}
