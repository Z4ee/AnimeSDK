#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionVisualState_TypeDefinitionIndex = 23579;

	enum class StageRegionVisualState : ::System::Int32
	{
		None = 0,
		Hide = 1,
		Load = 2,
		Load_HLOD = 3,
		HLOD = 4,
		Show = 5,
		Max = 7,
	};
}
