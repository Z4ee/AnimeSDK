#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleCppEvent_TypeDefinitionIndex = 40495;

	enum class MarbleCppEvent : ::System::Int32
	{
		None = 0,
		PlayerEnd = 1,
		GameEnd = 2,
	};
}
