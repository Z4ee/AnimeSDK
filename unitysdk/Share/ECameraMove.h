#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECameraMove_TypeDefinitionIndex = 16877;

	enum class ECameraMove : ::System::Int16
	{
		TriggerPosition = 0,
		CustomBound = 3,
		EnumCount = 5,
		Back = 4,
		Player = 1,
		Center = 2,
	};
}
