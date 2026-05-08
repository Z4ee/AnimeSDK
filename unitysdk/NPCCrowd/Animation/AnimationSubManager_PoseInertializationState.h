#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationState_TypeDefinitionIndex = 70461;

	enum class AnimationSubManager_PoseInertializationState : ::System::Int32
	{
		Active = 2,
		Inactive = 0,
		Pending = 1,
	};
}
