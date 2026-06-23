#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECameraMove_TypeDefinitionIndex = 9799;

	enum class ECameraMove : ::System::Int16
	{
		Back = 4,
		EnumCount = 5,
		CustomBound = 3,
		TriggerPosition = 0,
		Player = 1,
		Center = 2,
	};
}
