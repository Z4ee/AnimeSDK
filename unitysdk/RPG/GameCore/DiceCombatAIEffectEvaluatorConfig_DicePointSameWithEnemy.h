#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTSAMEWITHENEMY_METHOD_3_764F2CEFEE28A6A3_OFFSET UNITYSDK_OFFSET(0x1D0286A0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTSAMEWITHENEMY_METHOD_3_BB1C0E2DF1253F22_OFFSET UNITYSDK_OFFSET(0x1D028F20)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTSAMEWITHENEMY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D028690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy_TypeDefinitionIndex = 16000;

	class DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTSAMEWITHENEMY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB1C0E2DF1253F22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTSAMEWITHENEMY_METHOD_3_BB1C0E2DF1253F22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_764F2CEFEE28A6A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTSAMEWITHENEMY_METHOD_3_764F2CEFEE28A6A3_OFFSET))(a1, a2);
		}
	};
}
