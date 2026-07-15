#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RegionContentLevel_TypeDefinitionIndex = 59429;

	enum class RegionContentLevel : ::System::Int32
	{
		None = 0,
		Unload = 1,
		HLOD = 2,
		Load = 3,
	};
}
