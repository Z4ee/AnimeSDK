#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_METHOD_3_856B498FDBF1BAC8_OFFSET UNITYSDK_OFFSET(0x1D81EE10)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_METHOD_3_F39D86E4542A59F4_OFFSET UNITYSDK_OFFSET(0x1D81F920)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81EE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind_TypeDefinitionIndex = 15996;

	class DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Num; // 0x10
		::System::UInt32 Content; // 0x14
		::System::UInt32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F39D86E4542A59F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_METHOD_3_F39D86E4542A59F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_856B498FDBF1BAC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_METHOD_3_856B498FDBF1BAC8_OFFSET))(a1, a2);
		}
	};
}
