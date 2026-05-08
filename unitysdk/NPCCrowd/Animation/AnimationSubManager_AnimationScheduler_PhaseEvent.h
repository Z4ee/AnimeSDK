#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_PhaseEvent_TypeDefinitionIndex = 70438;

	enum class AnimationSubManager_AnimationScheduler_PhaseEvent : ::System::Int32
	{
		AfterPostUpdate = 5,
		BeforePreUpdate = 0,
		AfterPreUpdate = 1,
		BeforePostUpdate = 4,
		BeforeLateUpdate = 6,
		AfterUpdate = 3,
		BeforeUpdate = 2,
		AfterLateUpdate = 7,
		Count = 8,
	};
}
