#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimator_LookAtIKFadeJob_ETargetType_TypeDefinitionIndex = 39910;

	enum class NPCCPUAnimator_LookAtIKFadeJob_ETargetType : ::System::Int32
	{
		Transform = 2,
		WorldPos = 1,
		None = 0,
	};
}
