#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SoftDeathAreaState_TypeDefinitionIndex = 57796;

	enum class SoftDeathAreaState : ::System::Int32
	{
		None = 0,
		Decelerating = 1,
		Accelerating = 2,
	};
}
