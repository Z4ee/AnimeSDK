#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLDIFF_METHOD_3_2A7CDBA981A333B4_OFFSET UNITYSDK_OFFSET(0x1C10BBE0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLDIFF_METHOD_3_3A3ECA25A12F6E09_OFFSET UNITYSDK_OFFSET(0x1C10B180)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLDIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10B170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceAllDiff_TypeDefinitionIndex = 15567;

	class DiceCombatAIEffectEvaluatorConfig_DiceAllDiff : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLDIFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A7CDBA981A333B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLDIFF_METHOD_3_2A7CDBA981A333B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A3ECA25A12F6E09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLDIFF_METHOD_3_3A3ECA25A12F6E09_OFFSET))(a1, a2);
		}
	};
}
