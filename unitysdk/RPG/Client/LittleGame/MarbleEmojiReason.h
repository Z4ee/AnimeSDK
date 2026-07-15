#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MarbleEmojiReason_TypeDefinitionIndex = 40020;

	enum class MarbleEmojiReason : ::System::Int32
	{
		None = 0,
		Player = 1,
		SmallNegative = 2,
		SmallPositive = 3,
		BigNegative = 4,
		BigPositive = 5,
	};
}
