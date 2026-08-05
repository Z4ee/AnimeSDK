#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationPassEvent_TypeDefinitionIndex = 86292;

	enum class AnimationPassEvent : ::System::Int32
	{
		AfterForwardKinematics = 300,
		AfterInverseKinematics = 600,
		BeforeForwardKinematics = 100,
		ForwardKinematics = 200,
		BeforeAnimation = 0,
		BeforeInverseKinematics = 400,
		InverseKinematics = 500,
		AfterAnimation = 1000,
	};
}
