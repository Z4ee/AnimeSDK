#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSEQUENCE_METHOD_3_4EEFAB28AD33A09E_OFFSET UNITYSDK_OFFSET(0x1D028B00)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSEQUENCE_METHOD_3_80DC7BAA04457C0F_OFFSET UNITYSDK_OFFSET(0x1D028030)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D028020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceAllSequence_TypeDefinitionIndex = 16005;

	class DiceCombatAIEffectEvaluatorConfig_DiceAllSequence : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4EEFAB28AD33A09E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSEQUENCE_METHOD_3_4EEFAB28AD33A09E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80DC7BAA04457C0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLSEQUENCE_METHOD_3_80DC7BAA04457C0F_OFFSET))(a1, a2);
		}
	};
}
