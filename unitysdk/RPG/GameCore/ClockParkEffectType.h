#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkEffectType_TypeDefinitionIndex = 10032;

	enum class ClockParkEffectType : ::System::Int32
	{
		None = 0,
		AttributeChangeByDice = 1,
		AttributeChange = 2,
		GainBuff = 3,
		TakeReward = 4,
		ToChapter = 5,
		AddCardToMust = 6,
		AddGroundCardToMust = 7,
		BattleAddMazeBuff = 8,
		BattleEnterEvent = 9,
		MovieGameLife = 10,
		MovieGamePower = 11,
		MovieGameFeverTime = 12,
		MovieGameStageID = 13,
		LotteryCost = 14,
		LotteryIDList = 15,
		ShootingGameTargetScore = 16,
		ShootingGameMonsterGift = 17,
		ShootingGameMonsterHostage = 18,
		ShootingGameEnergyRestore = 19,
		ShootingGameEnemySpeed = 20,
		ShootingGameEnemyBulletNum = 21,
		AttributeChangePercent = 22,
		AttributeChangeByGameScore = 23,
		ShootingGameStageID = 24,
	};
}
