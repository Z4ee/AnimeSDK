#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedChain_TypeDefinitionIndex = 38279;

	enum class FullBodyBipedChain : ::System::Int32
	{
		LeftLeg = 2,
		LeftArm = 0,
		RightArm = 1,
		RightLeg = 3,
	};
}
