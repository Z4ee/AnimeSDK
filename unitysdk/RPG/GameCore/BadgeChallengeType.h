#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BadgeChallengeType_TypeDefinitionIndex = 12457;

	enum class BadgeChallengeType : ::System::Int32
	{
		None = 0,
		Boss = 1,
		Story = 2,
		Memory = 3,
		Peak = 4,
	};
}
