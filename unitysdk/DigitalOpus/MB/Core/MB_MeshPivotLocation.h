#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_MeshPivotLocation_TypeDefinitionIndex = 94559;

	enum class MB_MeshPivotLocation : ::System::Int32
	{
		worldOrigin = 0,
		boundsCenter = 1,
		customLocation = 2,
	};
}
