#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/EMoveBehaviours.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityFollowBehavioursDefine.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityBehavioursDefine_TypeDefinitionIndex = 46033;

	struct alignas(4) NPCAbilityBehavioursDefine
	{
		::NPCCrowd::Ability::EMoveBehaviours BehavioursType; // 0x10
		::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine FollowDefine; // 0x14
		::System::Single StopDistance; // 0x30
		::System::Single WalkDistance; // 0x34
		::System::Single RunDistance; // 0x38
		::System::Single PredictParam; // 0x3C
	};
}
