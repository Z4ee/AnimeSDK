#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BadgePlayType_TypeDefinitionIndex = 12826;

	enum class BadgePlayType : ::System::Int32
	{
		None = 0,
		Boss = 1,
		Story = 2,
		Memory = 3,
		Peak = 4,
		Activity = 5,
	};
}
