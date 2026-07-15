#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfProperty_TypeDefinitionIndex = 17753;

	enum class ElfProperty : ::System::Int32
	{
		PayDiscountRatio = 0,
		ThumbCountAdd = 1,
		EmotionValue = 2,
		ExtraPayChanceAdd = 3,
		DayCustomerNumAdd = 4,
		CustomerEatSpeedRatioAdd = 5,
		CustomerWaitingTimeAdd = 6,
		MoveSpeedRatioAdd = 7,
		CookSpeedRatioAdd = 8,
		ProcessEventSpeedRatioAdd = 9,
		DayGameTimeAdd = 10,
		PayBonusRatio = 11,
		CustomerWaitingTimeSlowRatio = 12,
		SpecialtyPriceRatioAdd = 13,
		OrdersEntityPayBonusRatio = 14,
		OrdersEntityEatSpeedRatioAdd = 15,
		WavesEntityPayBonusRatio = 16,
		WavesEntityEatSpeedRatioAdd = 17,
		EscapeBillEntityPayBonusRatio = 18,
		EscapeBillEntityMoveSpeedRatioAdd = 19,
	};
}
