#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPvpCareer_GameMode_TypeDefinitionIndex = 63073;

	enum class MatchThreeV2PlayerPvpCareer_GameMode : ::System::Int32
	{
		None = 0,
		Solo = 1,
		Arena = 2,
	};
}
