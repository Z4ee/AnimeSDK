#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelHoyoTagOverrideMode_TypeDefinitionIndex = 17009;

	enum class LevelHoyoTagOverrideMode : ::System::Int32
	{
		None = 0,
		Override = 1,
		Merge = 2,
	};
}
