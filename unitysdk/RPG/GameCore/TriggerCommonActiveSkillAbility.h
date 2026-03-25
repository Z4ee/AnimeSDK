#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERCOMMONACTIVESKILLABILITY_METHOD_3_F66A0BACF26821D1_OFFSET UNITYSDK_OFFSET(0x178C0990)
#define RPG_GAMECORE_TRIGGERCOMMONACTIVESKILLABILITY_METHOD_3_FD422308C2686178_OFFSET UNITYSDK_OFFSET(0x178C0A10)
#define RPG_GAMECORE_TRIGGERCOMMONACTIVESKILLABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x178C09E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCommonActiveSkillAbility_TypeDefinitionIndex = 20887;

	class TriggerCommonActiveSkillAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCOMMONACTIVESKILLABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F66A0BACF26821D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCommonActiveSkillAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCommonActiveSkillAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCOMMONACTIVESKILLABILITY_METHOD_3_F66A0BACF26821D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD422308C2686178(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCommonActiveSkillAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCommonActiveSkillAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCOMMONACTIVESKILLABILITY_METHOD_3_FD422308C2686178_OFFSET))(a1, a2);
		}
	};
}
