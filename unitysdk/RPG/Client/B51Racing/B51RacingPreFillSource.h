#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingPreFillSource_TypeDefinitionIndex = 80691;

	enum class B51RacingPreFillSource : ::System::Int32
	{
		None = 0,
		Development = 1,
		Driver = 2,
	};
}
