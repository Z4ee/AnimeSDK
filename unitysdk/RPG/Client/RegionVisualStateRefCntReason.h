#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RegionVisualStateRefCntReason_TypeDefinitionIndex = 50495;

	enum class RegionVisualStateRefCntReason : ::System::Int32
	{
		OpenDoor = 0,
		SourceDist = 1,
	};
}
