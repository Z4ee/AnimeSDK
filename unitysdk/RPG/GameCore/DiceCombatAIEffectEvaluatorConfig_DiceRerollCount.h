#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEREROLLCOUNT_METHOD_3_1DBD0C9D91B14689_OFFSET UNITYSDK_OFFSET(0x18864260)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEREROLLCOUNT_METHOD_3_229B4611F3712055_OFFSET UNITYSDK_OFFSET(0x188639C0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEREROLLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x188639B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceRerollCount_TypeDefinitionIndex = 15343;

	class DiceCombatAIEffectEvaluatorConfig_DiceRerollCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEREROLLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1DBD0C9D91B14689(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEREROLLCOUNT_METHOD_3_1DBD0C9D91B14689_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_229B4611F3712055(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEREROLLCOUNT_METHOD_3_229B4611F3712055_OFFSET))(a1, a2);
		}
	};
}
