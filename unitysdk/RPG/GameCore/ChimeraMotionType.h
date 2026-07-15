#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraMotionType_TypeDefinitionIndex = 12516;

	enum class ChimeraMotionType : ::System::Int32
	{
		None = 0,
		WaterHit = 1,
		WaterGun = 2,
	};
}
