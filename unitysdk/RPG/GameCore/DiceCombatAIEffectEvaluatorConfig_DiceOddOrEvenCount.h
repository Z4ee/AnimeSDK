#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT_METHOD_3_296743F050FD7647_OFFSET UNITYSDK_OFFSET(0x196A3210)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT_METHOD_3_D34FAECC7BE514BB_OFFSET UNITYSDK_OFFSET(0x196A2860)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x196A2850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount_TypeDefinitionIndex = 15392;

	class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Boolean IsOdd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_296743F050FD7647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT_METHOD_3_296743F050FD7647_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D34FAECC7BE514BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENCOUNT_METHOD_3_D34FAECC7BE514BB_OFFSET))(a1, a2);
		}
	};
}
