#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationType_TypeDefinitionIndex = 15922;

	enum class TeamFormationType : ::System::Int32
	{
		None = 0,
		LightTeamNormal = 1,
		LightTeamSelectTarget = 2,
		DarkTeamNormal = 3,
		LightTeamCustomZOffset = 4,
		Custom = 5,
	};
}
