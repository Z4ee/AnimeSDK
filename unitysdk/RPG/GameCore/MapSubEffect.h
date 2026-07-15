#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapSubEffect_TypeDefinitionIndex = 12122;

	enum class MapSubEffect : ::System::Int32
	{
		Unknown = 0,
		BatteryIncrease = 12,
		BatteryDecrease = 13,
		BatteryIncreasePercent = 14,
		BatteryIncreaseAndExtraConsume = 15,
		BatteryDecreaseAndAccumlateConsume = 16,
		BatteryDecreaseAndExtraIncrease = 17,
	};
}
