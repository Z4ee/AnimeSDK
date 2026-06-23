#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_PhaseEvent_TypeDefinitionIndex = 57447;

	enum class AnimationSubManager_AnimationScheduler_PhaseEvent : ::System::Int32
	{
		AfterUpdate = 3,
		AfterPreUpdate = 1,
		BeforePostUpdate = 4,
		AfterLateUpdate = 7,
		AfterPostUpdate = 5,
		BeforePreUpdate = 0,
		Count = 8,
		BeforeUpdate = 2,
		BeforeLateUpdate = 6,
	};
}
