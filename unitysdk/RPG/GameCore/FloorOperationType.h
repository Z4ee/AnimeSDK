#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorOperationType_TypeDefinitionIndex = 13472;

	enum class FloorOperationType : ::System::Int32
	{
		None = 0,
		EnterFloorTag = 1,
		ExitFloorTag = 2,
	};
}
