#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECameraMove_TypeDefinitionIndex = 16828;

	enum class ECameraMove : ::System::Int16
	{
		Back = 4,
		TriggerPosition = 0,
		Player = 1,
		CustomBound = 3,
		EnumCount = 5,
		Center = 2,
	};
}
