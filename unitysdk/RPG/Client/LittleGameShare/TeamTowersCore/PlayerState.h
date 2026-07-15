#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int PlayerState_TypeDefinitionIndex = 35542;

	enum class PlayerState : ::System::Int32
	{
		Alive = 0,
		Dead = 1,
		Leave = 2,
	};
}
