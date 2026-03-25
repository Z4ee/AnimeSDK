#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarUpgradePart_TypeDefinitionIndex = 51009;

	enum class AvatarUpgradePart : ::System::Int32
	{
		Level = 1,
		Promotion = 2,
		LightCone = 4,
		RelicSet2 = 8,
		RelicSet4 = 16,
		Relic = 24,
		TraceTree = 32,
		Rank = 64,
		All = 127,
	};
}
