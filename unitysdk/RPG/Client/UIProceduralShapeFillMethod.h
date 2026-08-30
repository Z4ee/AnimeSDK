#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIProceduralShapeFillMethod_TypeDefinitionIndex = 72624;

	enum class UIProceduralShapeFillMethod : ::System::Int32
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
		Radial360 = 3,
	};
}
