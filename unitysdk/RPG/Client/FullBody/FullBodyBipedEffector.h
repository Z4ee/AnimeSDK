#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int FullBodyBipedEffector_TypeDefinitionIndex = 68368;

	enum class FullBodyBipedEffector : ::System::Int32
	{
		Body = 0,
		LeftShoulder = 1,
		RightShoulder = 2,
		LeftThigh = 3,
		RightThigh = 4,
		LeftHand = 5,
		RightHand = 6,
		LeftFoot = 7,
		RightFoot = 8,
	};
}
