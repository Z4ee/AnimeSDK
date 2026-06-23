#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EInteractShape_TypeDefinitionIndex = 9807;

	enum class EInteractShape : ::System::Int16
	{
		Cube = 0,
		Sphere = 1,
		Sector = 2,
	};
}
