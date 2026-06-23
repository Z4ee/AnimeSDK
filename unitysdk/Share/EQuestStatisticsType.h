#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestStatisticsType_TypeDefinitionIndex = 11612;

	enum class EQuestStatisticsType : ::System::Byte
	{
		ArcanaCount = 0x5,
		StaminaOverLevelTimes = 0x7,
		TotalCoinUse = 0xE,
		KilledEnemyCount = 0x4,
		EnumBegin = 0x1,
		EventCount = 0x2,
		ArrivedLevel = 0x1,
		CostTime = 0x3,
		BangBooDreamLayer = 0x63,
		FinishedEventIDCount = 0xA,
		TarotCardCount = 0x6,
		RebornTimes = 0x8,
		FinishedEventTypeCount = 0x9,
		EnumEnd = 0x64,
	};
}
