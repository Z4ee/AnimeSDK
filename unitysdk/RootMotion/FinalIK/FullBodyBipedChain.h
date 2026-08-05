#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedChain_TypeDefinitionIndex = 38886;

	enum class FullBodyBipedChain : ::System::Int32
	{
		LeftLeg = 2,
		RightArm = 1,
		RightLeg = 3,
		LeftArm = 0,
	};
}
