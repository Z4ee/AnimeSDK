#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersColiiderTag_TypeDefinitionIndex = 35609;

	enum class TeamTowersColiiderTag : ::System::Byte
	{
		Brick = 0x1,
		DeadArea = 0x2,
	};
}
