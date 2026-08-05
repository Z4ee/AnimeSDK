#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EInteractShape_TypeDefinitionIndex = 11608;

	enum class EInteractShape : ::System::Int16
	{
		Sphere = 1,
		Sector = 2,
		Cube = 0,
	};
}
