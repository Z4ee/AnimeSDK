#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_METHOD_3_1AB3EDC64D4A5195_OFFSET UNITYSDK_OFFSET(0x1D81EFE0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_METHOD_3_F25226F9158B6745_OFFSET UNITYSDK_OFFSET(0x1D81FA30)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81EFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount_TypeDefinitionIndex = 15997;

	class DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Num; // 0x10
		::System::UInt32 Content; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F25226F9158B6745(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_METHOD_3_F25226F9158B6745_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1AB3EDC64D4A5195(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_METHOD_3_1AB3EDC64D4A5195_OFFSET))(a1, a2);
		}
	};
}
