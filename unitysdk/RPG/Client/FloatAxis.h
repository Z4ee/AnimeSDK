#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FloatAxis_TypeDefinitionIndex = 65983;

	enum class FloatAxis : ::System::Int32
	{
		Y = 0,
		X = 1,
		Z = 2,
	};
}
