#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int GameItemOfferChangeReason_TypeDefinitionIndex = 72260;

	enum class GameItemOfferChangeReason : ::System::Int32
	{
		Normal = 0,
		Redraw = 1,
	};
}
