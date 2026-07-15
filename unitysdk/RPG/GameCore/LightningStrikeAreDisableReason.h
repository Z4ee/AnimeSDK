#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightningStrikeAreDisableReason_TypeDefinitionIndex = 23684;

	enum class LightningStrikeAreDisableReason : ::System::UInt32
	{
		None = 0x0,
		Task = 0x1,
		Performance = 0x2,
	};
}
