#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinKeywordEventType_TypeDefinitionIndex = 53453;

	enum class FateRinKeywordEventType : ::System::Byte
	{
		None = 0x0,
		DealPlayedHand = 0x1,
		DealEndActionHand = 0x2,
		AfterAnyCardPlayed = 0x4,
		AfterCardEffectFinish = 0x8,
		AfterAddToHand = 0x10,
		AfterAddToDiscard = 0x20,
		AfterAddToDeck = 0x40,
		AfterAddToExile = 0x80,
	};
}
