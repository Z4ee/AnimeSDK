#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MiniGameEventReason_TypeDefinitionIndex = 40786;

	enum class MiniGameEventReason : ::System::Int32
	{
		Restart = 0,
		Fail = 1,
	};
}
