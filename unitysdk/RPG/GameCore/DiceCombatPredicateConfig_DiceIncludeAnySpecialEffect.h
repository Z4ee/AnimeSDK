#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_73D320B6F57334E0_OFFSET UNITYSDK_OFFSET(0x1886CE20)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_A00BD02A1C8E452E_OFFSET UNITYSDK_OFFSET(0x1886FD70)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1886CDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect_TypeDefinitionIndex = 15270;

	class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A00BD02A1C8E452E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_A00BD02A1C8E452E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_73D320B6F57334E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_METHOD_4_73D320B6F57334E0_OFFSET))(a1, a2);
		}
	};
}
