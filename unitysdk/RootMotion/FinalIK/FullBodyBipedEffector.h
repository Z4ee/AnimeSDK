#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedEffector_TypeDefinitionIndex = 38179;

	enum class FullBodyBipedEffector : ::System::Int32
	{
		RightThigh = 4,
		RightFoot = 8,
		LeftFoot = 7,
		LeftThigh = 3,
		LeftShoulder = 1,
		Body = 0,
		LeftHand = 5,
		RightHand = 6,
		RightShoulder = 2,
	};
}
