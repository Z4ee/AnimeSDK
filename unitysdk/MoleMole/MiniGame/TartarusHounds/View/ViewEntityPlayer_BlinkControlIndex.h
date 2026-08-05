#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityPlayer_BlinkControlIndex_TypeDefinitionIndex = 66954;

	enum class ViewEntityPlayer_BlinkControlIndex : ::System::Int32
	{
		Wool = 1,
		InvincibleLoop = 7,
		AddLife = 5,
		InvincibleOut = 8,
		LowHP = 2,
		Struggle = 3,
		None = 0,
		ImmuneSpecialHurt = 4,
		DyingRespawn = 6,
	};
}
