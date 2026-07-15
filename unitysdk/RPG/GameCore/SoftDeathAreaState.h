#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SoftDeathAreaState_TypeDefinitionIndex = 55072;

	enum class SoftDeathAreaState : ::System::Int32
	{
		None = 0,
		Decelerating = 1,
		Accelerating = 2,
	};
}
