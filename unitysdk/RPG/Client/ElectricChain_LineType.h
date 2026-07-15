#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ElectricChain_LineType_TypeDefinitionIndex = 67301;

	enum class ElectricChain_LineType : ::System::Int32
	{
		StraightLine = 0,
		Curve = 1,
	};
}
