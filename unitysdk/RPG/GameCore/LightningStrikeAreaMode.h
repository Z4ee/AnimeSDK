#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightningStrikeAreaMode_TypeDefinitionIndex = 24270;

	enum class LightningStrikeAreaMode : ::System::Int32
	{
		RandomAnchor = 0,
		LocalPlayer = 1,
	};
}
