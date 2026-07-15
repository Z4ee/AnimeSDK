#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BezierPoint_HandleStyle_TypeDefinitionIndex = 34535;

	enum class BezierPoint_HandleStyle : ::System::Int32
	{
		Connected = 0,
		Broken = 1,
		None = 2,
	};
}
