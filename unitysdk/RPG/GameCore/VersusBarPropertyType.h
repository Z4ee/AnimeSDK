#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VersusBarPropertyType_TypeDefinitionIndex = 24418;

	enum class VersusBarPropertyType : ::System::Int32
	{
		CurValue = 0,
		ExRatio = 1,
		MaxValue = 2,
		TotalBarCapacity = 3,
	};
}
