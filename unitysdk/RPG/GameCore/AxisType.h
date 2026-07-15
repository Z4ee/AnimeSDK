#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AxisType_TypeDefinitionIndex = 15041;

	enum class AxisType : ::System::Int32
	{
		X = 0,
		Y = 1,
		Z = 2,
	};
}
