#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallControlMode_TypeDefinitionIndex = 24500;

	enum class GravityBallControlMode : ::System::Int32
	{
		AD = 0,
		Space = 1,
	};
}
