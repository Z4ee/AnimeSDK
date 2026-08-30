#pragma once
#include "unitysdk/unitysdk.h"

namespace OceanSystem
{
	inline static constexpr unsigned int OceanRenderer_RendererType_TypeDefinitionIndex = 49401;

	enum class OceanRenderer_RendererType : ::System::Int32
	{
		AttachedToRenderer = 0,
		InfinitePlane = 1,
	};
}
