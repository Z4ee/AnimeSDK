#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int LandingLevel_TypeDefinitionIndex = 40831;

	enum class LandingLevel : ::System::Int32
	{
		None = 0,
		Medium = 1,
		Heavy = 2,
	};
}
