#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMoveToMoveMode_TypeDefinitionIndex = 23710;

	enum class PropMoveToMoveMode : ::System::Int32
	{
		ByDuration = 0,
		BySpeed = 1,
	};
}
