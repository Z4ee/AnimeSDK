#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int EAbilityActionTaskState_TypeDefinitionIndex = 43033;

	enum class EAbilityActionTaskState : ::System::Int32
	{
		Paused = 2,
		Active = 3,
		Uninitialized = 0,
		Finished = 4,
		AwaitingActivation = 1,
	};
}
