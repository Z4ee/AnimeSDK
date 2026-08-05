#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_PhaseEvent_TypeDefinitionIndex = 88358;

	enum class AnimationSubManager_AnimationScheduler_PhaseEvent : ::System::Int32
	{
		AfterLateUpdate = 7,
		BeforeUpdate = 2,
		AfterPostUpdate = 5,
		BeforePostUpdate = 4,
		BeforeLateUpdate = 6,
		AfterUpdate = 3,
		Count = 8,
		AfterPreUpdate = 1,
		BeforePreUpdate = 0,
	};
}
