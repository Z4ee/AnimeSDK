#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RegionVisualStateV2Mode_TypeDefinitionIndex = 58161;

	enum class RegionVisualStateV2Mode : ::System::Int32
	{
		Legacy = 0,
		PreferV2Read = 1,
		V2Only = 2,
	};
}
