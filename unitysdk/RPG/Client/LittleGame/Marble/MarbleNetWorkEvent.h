#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleNetWorkEvent_TypeDefinitionIndex = 40496;

	enum class MarbleNetWorkEvent : ::System::Int32
	{
		None = 0,
		GameInit = 1,
		GameStart = 2,
		PlayerEnter = 3,
		PlayerLeave = 4,
		GM = 5,
		GameplayCustom = 6,
		TimeoutClean = 7,
		Max = 8,
	};
}
