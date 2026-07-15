#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ElectricChain_LineControlMode_TypeDefinitionIndex = 67303;

	enum class ElectricChain_LineControlMode : ::System::Int32
	{
		Constant = 0,
		AnimationCurve = 1,
		GaussianDistribution = 2,
	};
}
