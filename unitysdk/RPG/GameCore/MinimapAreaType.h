#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MinimapAreaType_TypeDefinitionIndex = 10173;

	enum class MinimapAreaType : ::System::Int32
	{
		Normal = 0,
		RotatableRegion = 1,
		AnotherFloor = 2,
		EraFlipperRegion = 3,
		FiveDim = 4,
	};
}
