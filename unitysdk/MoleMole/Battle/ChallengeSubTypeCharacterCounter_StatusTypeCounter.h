#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeCharacterCounter_StatusTypeCounter_TypeDefinitionIndex = 48363;

	enum class ChallengeSubTypeCharacterCounter_StatusTypeCounter : ::System::Int32
	{
		QTE_SKILL_COUNT = 2,
		ANY_HIT = 4,
		ULTRA_SKILL_COUNT = 3,
		NONE = 0,
		BE_HIT_COUNT = 1,
	};
}
