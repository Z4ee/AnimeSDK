#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanarReflection_Quality_TypeDefinitionIndex = 70128;

	enum class PlanarReflection_Quality : ::System::Int32
	{
		High = 0,
		Medium = 1,
		Low = 2,
	};
}
