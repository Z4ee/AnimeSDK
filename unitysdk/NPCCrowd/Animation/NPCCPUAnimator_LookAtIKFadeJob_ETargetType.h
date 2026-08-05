#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimator_LookAtIKFadeJob_ETargetType_TypeDefinitionIndex = 65057;

	enum class NPCCPUAnimator_LookAtIKFadeJob_ETargetType : ::System::Int32
	{
		WorldPos = 1,
		None = 0,
		Transform = 2,
	};
}
