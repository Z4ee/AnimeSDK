#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerRequestSourceType_TypeDefinitionIndex = 60808;

	enum class DrinkMakerRequestSourceType : ::System::Int32
	{
		None = 0,
		FromBusinessDay = 1,
		FromGuideMission = 2,
		FromChallenge = 3,
		FromSpecialMission = 4,
		FromCheers = 5,
	};
}
