#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE_METHOD_3_12D913D9A06F5201_OFFSET UNITYSDK_OFFSET(0x196A3100)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE_METHOD_3_2E9835C47EBEA4AD_OFFSET UNITYSDK_OFFSET(0x196A26D0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x196A26C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceHasSequence_TypeDefinitionIndex = 15397;

	class DiceCombatAIEffectEvaluatorConfig_DiceHasSequence : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Len; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12D913D9A06F5201(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE_METHOD_3_12D913D9A06F5201_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E9835C47EBEA4AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASSEQUENCE_METHOD_3_2E9835C47EBEA4AD_OFFSET))(a1, a2);
		}
	};
}
