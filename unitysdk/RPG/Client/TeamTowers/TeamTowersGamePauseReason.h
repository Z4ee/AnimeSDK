#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGamePauseReason_TypeDefinitionIndex = 78633;

	enum class TeamTowersGamePauseReason : ::System::Int32
	{
		None = 0,
		Task = 1,
		UI = 2,
	};
}
