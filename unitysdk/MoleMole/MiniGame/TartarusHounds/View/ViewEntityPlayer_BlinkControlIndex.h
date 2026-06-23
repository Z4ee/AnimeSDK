#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityPlayer_BlinkControlIndex_TypeDefinitionIndex = 84590;

	enum class ViewEntityPlayer_BlinkControlIndex : ::System::Int32
	{
		InvincibleOut = 8,
		LowHP = 2,
		None = 0,
		InvincibleLoop = 7,
		DyingRespawn = 6,
		Wool = 1,
		AddLife = 5,
		Struggle = 3,
		ImmuneSpecialHurt = 4,
	};
}
