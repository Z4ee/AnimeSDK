#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersStageDifficultyType_TypeDefinitionIndex = 78555;

	enum class TeamTowersStageDifficultyType : ::System::Int32
	{
		None = 0,
		Simple = 1,
		Hard = 2,
	};
}
