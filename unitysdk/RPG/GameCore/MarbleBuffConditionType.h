#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffConditionType_TypeDefinitionIndex = 11474;

	enum class MarbleBuffConditionType : ::System::Int32
	{
		None = 0,
		AssignSeal = 1,
		AssignNoSeal = 2,
		AllySealHp = 3,
		EnemySealHp = 4,
		AssignRound = 5,
		FallBehindScore = 6,
		LeadScore = 7,
		AssignNoTech = 8,
		EnemyGapScore = 9,
		FirstHand = 10,
		LevelFeature = 11,
		Pvp = 12,
		EnemyIsAI = 13,
		AssignLevel = 14,
		OwnerIsAI = 15,
	};
}
