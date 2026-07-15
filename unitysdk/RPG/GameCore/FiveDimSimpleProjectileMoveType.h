#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileMoveType_TypeDefinitionIndex = 10182;

	enum class FiveDimSimpleProjectileMoveType : ::System::Int32
	{
		None = 0,
		Parabola = 1,
		Line = 2,
		Direct = 3,
	};
}
