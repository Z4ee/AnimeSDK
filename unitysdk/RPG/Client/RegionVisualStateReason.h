#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RegionVisualStateReason_TypeDefinitionIndex = 59426;

	enum class RegionVisualStateReason : ::System::Int32
	{
		StreamingSource = 0,
		Connection = 1,
		ConfigAffect = 2,
		OutOfRegion = 4,
	};
}
