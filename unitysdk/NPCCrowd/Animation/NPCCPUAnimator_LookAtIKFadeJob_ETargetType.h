#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimator_LookAtIKFadeJob_ETargetType_TypeDefinitionIndex = 76436;

	enum class NPCCPUAnimator_LookAtIKFadeJob_ETargetType : ::System::Int32
	{
		None = 0,
		WorldPos = 1,
		Transform = 2,
	};
}
