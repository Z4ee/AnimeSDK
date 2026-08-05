#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestStatisticsType_TypeDefinitionIndex = 9400;

	enum class EQuestStatisticsType : ::System::Byte
	{
		KilledEnemyCount = 0x4,
		EnumEnd = 0x64,
		FinishedEventTypeCount = 0x9,
		TotalCoinUse = 0xE,
		BangBooDreamLayer = 0x63,
		ArrivedLevel = 0x1,
		CostTime = 0x3,
		RebornTimes = 0x8,
		ArcanaCount = 0x5,
		StaminaOverLevelTimes = 0x7,
		FinishedEventIDCount = 0xA,
		EventCount = 0x2,
		TarotCardCount = 0x6,
		EnumBegin = 0x1,
	};
}
