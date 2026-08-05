#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentAccessFilterMode_TypeDefinitionIndex = 38020;

	enum class ComponentAccessFilterMode : ::System::Int32
	{
		Negate = 128,
		AllOf = 4,
		OneOrMoreOf = 2,
		OneOf = 1,
		None = 0,
	};
}
