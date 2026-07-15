#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildPropertyType_TypeDefinitionIndex = 23823;

	enum class EvolveBuildPropertyType : ::System::Int32
	{
		Coin = 0,
		ExCoinRatio = 1,
		CurExp = 2,
		CurExpMax = 3,
		CurExpStep = 4,
		TotalExp = 5,
		ExExpRatio = 6,
		WaveExExpRatio = 7,
		StageMergedID = 8,
		ReRoll = 9,
		LostCount = 10,
		LevelDifficulty = 11,
		LevelPeriod = 12,
		TurnOfCurWave = 13,
		WaveCountForPeriod = 14,
		MaxWaveCountForPeriod = 15,
		WaveCountForLevel = 16,
		MaxWaveCountForLevel = 17,
		DeadlineState = 18,
		CountDownTimer = 19,
		TotalScore = 20,
		CardBaseReRoll = 21,
		Season = 22,
		StoryStep = 23,
		STAT_Start = 100,
		STAT_Weapon_09 = 100,
		STAT_Weapon_13 = 101,
		STAT_Card_12 = 102,
		STAT_Backup_01 = 103,
		STAT_Backup_02 = 104,
		STAT_GreenHand_LevelUpCount = 105,
		STAT_SC_Card_09 = 106,
		STAT_SC_Card_014 = 107,
		STAT_SC_Card_015 = 108,
		STAT_SC_Card_023 = 109,
		STAT_SC_Card_059 = 110,
		STAT_SC_Card_082 = 111,
		STAT_SC_Weapon_007 = 112,
		STAT_End = 113,
	};
}
