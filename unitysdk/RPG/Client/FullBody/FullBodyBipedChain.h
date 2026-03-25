#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int FullBodyBipedChain_TypeDefinitionIndex = 60920;

	enum class FullBodyBipedChain : ::System::Int32
	{
		LeftArm = 0,
		RightArm = 1,
		LeftLeg = 2,
		RightLeg = 3,
	};
}
