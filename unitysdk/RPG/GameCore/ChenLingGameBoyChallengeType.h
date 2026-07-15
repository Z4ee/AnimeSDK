#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyChallengeType_TypeDefinitionIndex = 13576;

	enum class ChenLingGameBoyChallengeType : ::System::Int32
	{
		Invalid = 0,
		Time = 1,
		Collect = 2,
		Dodge = 3,
		Die = 4,
		Pass = 5,
	};
}
