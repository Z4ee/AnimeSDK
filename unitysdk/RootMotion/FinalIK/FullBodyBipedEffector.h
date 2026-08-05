#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedEffector_TypeDefinitionIndex = 38822;

	enum class FullBodyBipedEffector : ::System::Int32
	{
		Body = 0,
		LeftHand = 5,
		RightHand = 6,
		LeftFoot = 7,
		LeftShoulder = 1,
		RightThigh = 4,
		LeftThigh = 3,
		RightFoot = 8,
		RightShoulder = 2,
	};
}
