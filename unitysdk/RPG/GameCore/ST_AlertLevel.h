#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_AlertLevel_TypeDefinitionIndex = 18388;

	enum class ST_AlertLevel : ::System::Int32
	{
		None = 0,
		Alert = 1,
		Chase = 2,
	};
}
