#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int ChessUIIconType_TypeDefinitionIndex = 24947;

	enum class ChessUIIconType : ::System::Int32
	{
		CHESS_UI_ICON_TYPE_COIN = 1,
		CHESS_UI_ICON_TYPE_ATK = 5,
		CHESS_UI_ICON_TYPE_COUNTDOWN = 6,
		CHESS_UI_ICON_TYPE_NONE = 0,
		CHESS_UI_ICON_TYPE_MECHANISM = 3,
		CHESS_UI_ICON_TYPE_HP = 4,
		CHESS_UI_ICON_TYPE_GOLD = 2,
		CHESS_UI_ICON_TYPE_KEY = 7,
		CHESS_UI_ICON_TYPE_CARD = 9,
		CHESS_UI_ICON_TYPE_CLUE = 8,
	};
}
