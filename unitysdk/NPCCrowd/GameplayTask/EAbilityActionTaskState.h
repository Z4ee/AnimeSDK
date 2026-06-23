#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int EAbilityActionTaskState_TypeDefinitionIndex = 67450;

	enum class EAbilityActionTaskState : ::System::Int32
	{
		Uninitialized = 0,
		Paused = 2,
		Finished = 4,
		Active = 3,
		AwaitingActivation = 1,
	};
}
