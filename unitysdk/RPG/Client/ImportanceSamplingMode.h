#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ImportanceSamplingMode_TypeDefinitionIndex = 70916;

	enum class ImportanceSamplingMode : ::System::Int32
	{
		Uniform = 0,
		Cosine = 1,
		GGX = 2,
	};
}
