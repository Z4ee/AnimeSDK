#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_METHOD_3_3BD58AF1EE695FBA_OFFSET UNITYSDK_OFFSET(0x18863860)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_METHOD_3_7EAA1067AB245F5A_OFFSET UNITYSDK_OFFSET(0x18864180)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18863850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange_TypeDefinitionIndex = 15342;

	class DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Min; // 0x10
		::System::UInt32 Max; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EAA1067AB245F5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_METHOD_3_7EAA1067AB245F5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3BD58AF1EE695FBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_METHOD_3_3BD58AF1EE695FBA_OFFSET))(a1, a2);
		}
	};
}
