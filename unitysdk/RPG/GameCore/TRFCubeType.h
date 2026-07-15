#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFCubeType_TypeDefinitionIndex = 18162;

	enum class TRFCubeType : ::System::Int32
	{
		Cube = 0,
		Horizontal = 1,
		Vertical = 2,
		Ladder = 3,
	};
}
