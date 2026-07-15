#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeWeatherUIType_TypeDefinitionIndex = 52879;

	enum class DawnsEyeWeatherUIType : ::System::Int32
	{
		None = 0,
		Sunny = 1,
		ThunderCharging = 2,
		ThunderFight = 3,
		Disaster = 4,
	};
}
