#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_METHOD_3_270E67ECA2794F81_OFFSET UNITYSDK_OFFSET(0x1D81FB80)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_METHOD_3_DF806F0F02F010C3_OFFSET UNITYSDK_OFFSET(0x1D81F1A0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81F190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum_TypeDefinitionIndex = 15994;

	class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Boolean IsOdd; // 0x10
		::System::UInt32 Num; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_270E67ECA2794F81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_METHOD_3_270E67ECA2794F81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF806F0F02F010C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_METHOD_3_DF806F0F02F010C3_OFFSET))(a1, a2);
		}
	};
}
