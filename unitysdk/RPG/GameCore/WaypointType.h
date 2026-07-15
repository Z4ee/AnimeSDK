#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaypointType_TypeDefinitionIndex = 10066;

	enum class WaypointType : ::System::Int32
	{
		Unknown = 0,
		Stage = 1,
		Cg = 2,
	};
}
