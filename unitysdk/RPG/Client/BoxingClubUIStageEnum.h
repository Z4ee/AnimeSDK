#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubUIStageEnum_TypeDefinitionIndex = 60174;

	enum class BoxingClubUIStageEnum : ::System::Int32
	{
		PreEditTeamMode = 1,
		EditedTeamMode = 2,
		PreRandomPickEnemy = 3,
		RandomPickingEnemy = 4,
		FirstRound = 5,
		OtherRound = 6,
		FinalRound = 7,
	};
}
