#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationProcessPhase_TypeDefinitionIndex = 88320;

	enum class AnimationSubManager_AnimationProcessPhase : ::System::Int32
	{
		Count = 4,
		LateUpdate = 3,
		PostUpdate = 2,
		PreUpdate = 0,
		Update = 1,
	};
}
