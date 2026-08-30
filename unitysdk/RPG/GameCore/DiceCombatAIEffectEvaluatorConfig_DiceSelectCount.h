#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_METHOD_3_687441B2D7DE5F87_OFFSET UNITYSDK_OFFSET(0x1D81F4B0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_METHOD_3_68F19C21DABAB34B_OFFSET UNITYSDK_OFFSET(0x1D81FD70)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81F4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceSelectCount_TypeDefinitionIndex = 16003;

	class DiceCombatAIEffectEvaluatorConfig_DiceSelectCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68F19C21DABAB34B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_METHOD_3_68F19C21DABAB34B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_687441B2D7DE5F87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_METHOD_3_687441B2D7DE5F87_OFFSET))(a1, a2);
		}
	};
}
