#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RegionSourceProfile_TypeDefinitionIndex = 62149;

	enum class RegionSourceProfile : ::System::Int32
	{
		Visible = 0,
		Preload = 1,
	};
}
