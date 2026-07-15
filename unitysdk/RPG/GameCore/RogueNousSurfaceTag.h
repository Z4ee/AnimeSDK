#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSurfaceTag_TypeDefinitionIndex = 14313;

	enum class RogueNousSurfaceTag : ::System::Int32
	{
		None = 0,
		Common = 1,
		SpecialType = 2,
		BlockChange = 3,
		Move = 4,
		Battle = 5,
		Mark = 6,
		Buff = 7,
		BuffProMax = 8,
		Miracle = 9,
		Coin = 10,
		Replicate = 11,
		ActionPoint = 12,
	};
}
