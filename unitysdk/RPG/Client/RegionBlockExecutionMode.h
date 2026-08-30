#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RegionBlockExecutionMode_TypeDefinitionIndex = 62236;

	enum class RegionBlockExecutionMode : ::System::Int32
	{
		None = 0,
		Focus = 1,
	};
}
