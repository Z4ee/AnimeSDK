#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MiniGameEventReason_TypeDefinitionIndex = 41740;

	enum class MiniGameEventReason : ::System::Int32
	{
		Restart = 0,
		Fail = 1,
	};
}
