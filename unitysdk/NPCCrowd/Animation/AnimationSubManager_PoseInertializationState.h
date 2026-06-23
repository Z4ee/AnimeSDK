#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationState_TypeDefinitionIndex = 57367;

	enum class AnimationSubManager_PoseInertializationState : ::System::Int32
	{
		Inactive = 0,
		Active = 2,
		Pending = 1,
	};
}
