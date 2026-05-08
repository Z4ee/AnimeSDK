#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TwoBonesIKJointAssignPolicy_TypeDefinitionIndex = 70504;

	enum class AnimationSubManager_TwoBonesIKJointAssignPolicy : ::System::Int32
	{
		RelativeToCenter = 3,
		UseMiddleBone = 1,
		ManuallySet = 4,
		RelativeToEffector = 2,
		DontCare = 0,
	};
}
