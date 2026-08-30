#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_METHOD_3_37FF8778EB550573_OFFSET UNITYSDK_OFFSET(0x1D034290)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_METHOD_3_6540EA182E45775B_OFFSET UNITYSDK_OFFSET(0x1D0342F0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0342E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AIEffectScore_TypeDefinitionIndex = 16006;

	class DiceCombatTaskConfig_AIEffectScore : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* EffectEvaluator; // 0x10
		::RPG::GameCore::DynamicFloat* EffectScoreWeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37FF8778EB550573(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_METHOD_3_37FF8778EB550573_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6540EA182E45775B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_METHOD_3_6540EA182E45775B_OFFSET))(a1, a2);
		}
	};
}
