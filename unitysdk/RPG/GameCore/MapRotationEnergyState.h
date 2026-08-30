#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationEnergyState_TypeDefinitionIndex = 24266;

	enum class MapRotationEnergyState : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Full = 2,
		Empty = 3,
	};
}
