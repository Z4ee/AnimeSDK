#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationPassEvent_TypeDefinitionIndex = 61851;

	enum class AnimationPassEvent : ::System::Int32
	{
		BeforeAnimation = 0,
		ForwardKinematics = 200,
		InverseKinematics = 500,
		AfterAnimation = 1000,
		BeforeInverseKinematics = 400,
		BeforeForwardKinematics = 100,
		AfterInverseKinematics = 600,
		AfterForwardKinematics = 300,
	};
}
