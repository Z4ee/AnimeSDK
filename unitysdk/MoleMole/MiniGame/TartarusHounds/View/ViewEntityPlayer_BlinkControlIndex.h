#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityPlayer_BlinkControlIndex_TypeDefinitionIndex = 38624;

	enum class ViewEntityPlayer_BlinkControlIndex : ::System::Int32
	{
		ImmuneSpecialHurt = 4,
		DyingRespawn = 6,
		LowHP = 2,
		InvincibleLoop = 7,
		Struggle = 3,
		InvincibleOut = 8,
		Wool = 1,
		None = 0,
		AddLife = 5,
	};
}
