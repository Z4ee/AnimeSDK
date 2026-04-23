#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_RTTRIGGERABILITY_METHOD_3_5E61CAFF920C86AE_OFFSET UNITYSDK_OFFSET(0x18DDBB00)
#define RPG_GAMECORE_RTTRIGGERABILITY_METHOD_3_99B8884E1C3E8D31_OFFSET UNITYSDK_OFFSET(0x18DDBA80)
#define RPG_GAMECORE_RTTRIGGERABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDBAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTriggerAbility_TypeDefinitionIndex = 23071;

	class RtTriggerAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AbilityInherentTargetType; // 0x20
		::RPG::GameCore::PredicateConfig* AbilityInherentTargetPredicate; // 0x28
		::System::String* AbilityName; // 0x30
		::System::Boolean SyncTimeScale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTRIGGERABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99B8884E1C3E8D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTriggerAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTriggerAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTRIGGERABILITY_METHOD_3_99B8884E1C3E8D31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E61CAFF920C86AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTriggerAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTriggerAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTRIGGERABILITY_METHOD_3_5E61CAFF920C86AE_OFFSET))(a1, a2);
		}
	};
}
