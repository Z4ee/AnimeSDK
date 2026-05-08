#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int EMoveBehaviours_TypeDefinitionIndex = 54304;

	enum class EMoveBehaviours : ::System::Int32
	{
		None = 0,
		WaitingSlot = 2,
		FollowQueue = 1,
	};
}
