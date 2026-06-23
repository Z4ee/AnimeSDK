#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TwoBonesIKJointAssignPolicy_TypeDefinitionIndex = 57444;

	enum class AnimationSubManager_TwoBonesIKJointAssignPolicy : ::System::Int32
	{
		RelativeToCenter = 3,
		RelativeToEffector = 2,
		ManuallySet = 4,
		UseMiddleBone = 1,
		DontCare = 0,
	};
}
