#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineWay_ETailMode_TypeDefinitionIndex = 57117;

	enum class AirlineWay_ETailMode : ::System::Int32
	{
		Cylinder = 0,
		HorizontalPanel = 1,
		VerticalPanel = 2,
	};
}
