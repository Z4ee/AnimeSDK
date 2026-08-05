#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationSpace_TypeDefinitionIndex = 88238;

	enum class AnimationSubManager_PoseInertializationSpace : ::System::Int32
	{
		WorldRotation = 2,
		LocalSpace = 0,
		WorldSpace = 1,
	};
}
