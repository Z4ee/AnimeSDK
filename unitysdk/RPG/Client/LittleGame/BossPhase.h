#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BossPhase_TypeDefinitionIndex = 40147;

	enum class BossPhase : ::System::Int32
	{
		None = 0,
		Phase1 = 1,
		Phase2 = 2,
	};
}
