#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyFloorType_TypeDefinitionIndex = 12131;

	enum class AlleyFloorType : ::System::Int32
	{
		Unknown = 0,
		Low = 1,
		Mid = 2,
		High = 3,
		MaxHigh = 4,
	};
}
