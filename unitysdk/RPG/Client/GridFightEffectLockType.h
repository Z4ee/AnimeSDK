#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectLockType_TypeDefinitionIndex = 61650;

	enum class GridFightEffectLockType : ::System::Int32
	{
		EquipmentTrack = 1,
		Equipment = 2,
		Consumable = 4,
		Bench = 8,
		Board = 16,
	};
}
