#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpeedLineEffectMode_TypeDefinitionIndex = 18214;

	enum class SpeedLineEffectMode : ::System::Int32
	{
		None = 0,
		Line = 1,
		Radial = 2,
	};
}
