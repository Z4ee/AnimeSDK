#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEventType_TypeDefinitionIndex = 15411;

	enum class ChimeraDuelEventType : ::System::Int32
	{
		None = 0,
		BeforeDeath = 1,
		AfterInjured = 2,
		OnTurnBegin = 3,
		OnSummoned = 4,
		OnGameStart = 5,
		OnKillEnemy = 6,
		AfterSwapPosition = 7,
		AfterAction = 8,
		OnSummonTokenChange = 9,
		AfterAppendAction = 10,
		AfterCastAdditionalSkill = 11,
		AfterTeamEliminated = 12,
		AfterAttributeChange = 13,
		AfterCirticalHit = 14,
	};
}
