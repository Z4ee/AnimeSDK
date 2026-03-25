#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerDatabasePropertyType_TypeDefinitionIndex = 57541;

	enum class PolymerDatabasePropertyType : ::System::Int32
	{
		Float = 0,
		Color = 1,
		Vector = 2,
	};
}
