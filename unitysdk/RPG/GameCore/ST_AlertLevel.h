#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_AlertLevel_TypeDefinitionIndex = 23606;

	enum class ST_AlertLevel : ::System::Int32
	{
		None = 0,
		Alert = 1,
		Chase = 2,
	};
}
