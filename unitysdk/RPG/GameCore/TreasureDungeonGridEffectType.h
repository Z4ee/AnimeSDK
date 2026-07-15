#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridEffectType_TypeDefinitionIndex = 12041;

	enum class TreasureDungeonGridEffectType : ::System::Int32
	{
		None = 0,
		LockAround = 1,
		ShowAtBegining = 2,
	};
}
