#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeCharacterCounter_StatusTypeCounter_TypeDefinitionIndex = 48539;

	enum class ChallengeSubTypeCharacterCounter_StatusTypeCounter : ::System::Int32
	{
		NONE = 0,
		ANY_HIT = 4,
		ULTRA_SKILL_COUNT = 3,
		QTE_SKILL_COUNT = 2,
		BE_HIT_COUNT = 1,
	};
}
