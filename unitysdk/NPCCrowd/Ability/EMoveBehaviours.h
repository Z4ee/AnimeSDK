#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int EMoveBehaviours_TypeDefinitionIndex = 84252;

	enum class EMoveBehaviours : ::System::Int32
	{
		WaitingSlot = 2,
		FollowQueue = 1,
		None = 0,
	};
}
