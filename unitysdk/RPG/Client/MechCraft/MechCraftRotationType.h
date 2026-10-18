#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftRotationType_TypeDefinitionIndex = 41660;

	enum class MechCraftRotationType : ::System::Int32
	{
		Ccw0Degrees = 0,
		Ccw90Degrees = 1,
		Ccw180Degrees = 2,
		Ccw270Degrees = 3,
	};
}
