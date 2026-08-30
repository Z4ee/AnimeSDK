#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN_METHOD_3_73D8B21AE9089841_OFFSET UNITYSDK_OFFSET(0x1D81F640)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN_METHOD_3_FFBA2EB2C2FFED55_OFFSET UNITYSDK_OFFSET(0x1D81EBC0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81EBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven_TypeDefinitionIndex = 15992;

	class DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Boolean IsOdd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_73D8B21AE9089841(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN_METHOD_3_73D8B21AE9089841_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFBA2EB2C2FFED55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEALLODDOREVEN_METHOD_3_FFBA2EB2C2FFED55_OFFSET))(a1, a2);
		}
	};
}
