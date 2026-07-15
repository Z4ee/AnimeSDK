#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerDatabasePropertyType_TypeDefinitionIndex = 67147;

	enum class PolymerDatabasePropertyType : ::System::Int32
	{
		Float = 0,
		Color = 1,
		Vector = 2,
	};
}
