#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyState_TypeDefinitionIndex = 62852;

	enum class LobbyState : ::System::Int32
	{
		None = 0,
		Ready = 1,
		Matching = 2,
		WaitGameStart = 3,
		Gaming = 4,
	};
}
