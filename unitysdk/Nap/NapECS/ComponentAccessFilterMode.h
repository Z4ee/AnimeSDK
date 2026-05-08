#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentAccessFilterMode_TypeDefinitionIndex = 35753;

	enum class ComponentAccessFilterMode : ::System::Int32
	{
		OneOf = 1,
		Negate = 128,
		AllOf = 4,
		OneOrMoreOf = 2,
		None = 0,
	};
}
