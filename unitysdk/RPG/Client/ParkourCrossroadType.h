#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourCrossroadType_TypeDefinitionIndex = 57037;

	enum class ParkourCrossroadType : ::System::Int32
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
	};
}
