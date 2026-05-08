#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationProcessPhase_TypeDefinitionIndex = 70503;

	enum class AnimationSubManager_AnimationProcessPhase : ::System::Int32
	{
		PreUpdate = 0,
		Update = 1,
		LateUpdate = 3,
		Count = 4,
		PostUpdate = 2,
	};
}
