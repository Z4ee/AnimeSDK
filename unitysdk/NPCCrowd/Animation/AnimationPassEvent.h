#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationPassEvent_TypeDefinitionIndex = 60722;

	enum class AnimationPassEvent : ::System::Int32
	{
		AfterAnimation = 1000,
		AfterInverseKinematics = 600,
		BeforeAnimation = 0,
		InverseKinematics = 500,
		BeforeForwardKinematics = 100,
		ForwardKinematics = 200,
		AfterForwardKinematics = 300,
		BeforeInverseKinematics = 400,
	};
}
