#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationScheduler; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_DependencyHelper_1_TypeDefinitionIndex = 88241;

	template <typename T>
	struct AnimationSubManager_DependencyHelper_1
	{
		::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler* _scheduler; // 0x0
	};
}
