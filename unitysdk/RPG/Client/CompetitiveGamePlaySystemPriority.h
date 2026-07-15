#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CompetitiveGamePlaySystemPriority_TypeDefinitionIndex = 57912;

	enum class CompetitiveGamePlaySystemPriority : ::System::Int32
	{
		None = 0,
		TimeRewind = 1,
		QteCatchGhostModule = 2,
	};
}
