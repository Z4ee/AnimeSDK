#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentAccessFilterMode_TypeDefinitionIndex = 37320;

	enum class ComponentAccessFilterMode : ::System::Int32
	{
		None = 0,
		Negate = 128,
		OneOrMoreOf = 2,
		AllOf = 4,
		OneOf = 1,
	};
}
