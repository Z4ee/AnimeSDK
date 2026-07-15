#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCardPileType_TypeDefinitionIndex = 23584;

	enum class FateRinCardPileType : ::System::UInt16
	{
		None = 0x0,
		Hand = 0x1,
		Deck = 0x2,
		Draw = 0x4,
		Discard = 0x8,
		Exile = 0x10,
		Executing = 0x20,
		ParamCardList = 0x40,
		CurSelectCard = 0x80,
		AllCardInstance = 0xD,
	};
}
