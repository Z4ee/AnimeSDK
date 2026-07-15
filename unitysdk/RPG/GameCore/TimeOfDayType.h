#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeOfDayType_TypeDefinitionIndex = 13526;

	enum class TimeOfDayType : ::System::Int32
	{
		Unknown = 0,
		Day = 1,
		Night = 2,
	};
}
