#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepPathType_TypeDefinitionIndex = 70457;

	enum class AnimationSubManager_FootStepPathType : ::System::Int32
	{
		Slope = 2,
		Normal = 0,
		Stair = 1,
	};
}
