#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersCorePlayerDrawReason_TypeDefinitionIndex = 36396;

	enum class TeamTowersCorePlayerDrawReason : ::System::Byte
	{
		Leave = 0x0,
		TeammateDraw = 0x1,
		KickOut = 0x2,
	};
}
