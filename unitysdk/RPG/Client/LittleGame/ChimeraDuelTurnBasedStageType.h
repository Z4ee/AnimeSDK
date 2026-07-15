#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraDuelTurnBasedStageType_TypeDefinitionIndex = 39507;

	enum class ChimeraDuelTurnBasedStageType : ::System::Int32
	{
		None = 0,
		Prepare = 1,
		Battle = 2,
		Settle = 3,
		Count = 4,
	};
}
