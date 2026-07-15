#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaypointUnlockType_TypeDefinitionIndex = 10067;

	enum class WaypointUnlockType : ::System::Int32
	{
		Unknown = 0,
		Stage = 1,
		Level = 2,
	};
}
