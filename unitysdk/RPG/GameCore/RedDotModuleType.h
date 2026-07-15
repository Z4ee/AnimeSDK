#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotModuleType_TypeDefinitionIndex = 23962;

	enum class RedDotModuleType : ::System::Int32
	{
		Default = 0,
		Rogue = 1,
		AetherDivide = 2,
		Heliobus = 3,
		ActivityCommon = 4,
	};
}
