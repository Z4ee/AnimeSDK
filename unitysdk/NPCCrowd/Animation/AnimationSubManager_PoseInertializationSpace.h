#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationSpace_TypeDefinitionIndex = 57342;

	enum class AnimationSubManager_PoseInertializationSpace : ::System::Int32
	{
		WorldSpace = 1,
		WorldRotation = 2,
		LocalSpace = 0,
	};
}
