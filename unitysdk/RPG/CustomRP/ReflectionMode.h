#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReflectionMode_TypeDefinitionIndex = 29255;

	enum class ReflectionMode : ::System::Int32
	{
		None = 0,
		Decal = 1,
		Blend = 2,
		Renderer = 3,
	};
}
