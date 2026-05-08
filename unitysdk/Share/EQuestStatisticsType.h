#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestStatisticsType_TypeDefinitionIndex = 14102;

	enum class EQuestStatisticsType : ::System::Byte
	{
		ArcanaCount = 0x5,
		KilledEnemyCount = 0x4,
		RebornTimes = 0x8,
		BangBooDreamLayer = 0x63,
		CostTime = 0x3,
		EnumBegin = 0x1,
		StaminaOverLevelTimes = 0x7,
		TarotCardCount = 0x6,
		ArrivedLevel = 0x1,
		EventCount = 0x2,
		EnumEnd = 0x64,
		TotalCoinUse = 0xE,
		FinishedEventTypeCount = 0x9,
		FinishedEventIDCount = 0xA,
	};
}
