#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int EAbilityActionTaskState_TypeDefinitionIndex = 68389;

	enum class EAbilityActionTaskState : ::System::Int32
	{
		Paused = 2,
		Uninitialized = 0,
		AwaitingActivation = 1,
		Finished = 4,
		Active = 3,
	};
}
