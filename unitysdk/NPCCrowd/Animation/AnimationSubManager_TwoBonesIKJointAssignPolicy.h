#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TwoBonesIKJointAssignPolicy_TypeDefinitionIndex = 88248;

	enum class AnimationSubManager_TwoBonesIKJointAssignPolicy : ::System::Int32
	{
		RelativeToCenter = 3,
		DontCare = 0,
		ManuallySet = 4,
		RelativeToEffector = 2,
		UseMiddleBone = 1,
	};
}
