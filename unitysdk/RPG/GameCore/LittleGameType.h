#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameType_TypeDefinitionIndex = 18102;

	enum class LittleGameType : ::System::Int32
	{
		TimeRelayFlame = 301,
		Chimera = 311,
		PingPong = 302,
		FiveDim = 401,
		FourRotateVoxel = 402,
		Marble = 321,
		Parkour = 331,
		MarbleMainSub = 361,
		ElfRestaurant = 341,
		CakeRace = 371,
		DiceCombat = 403,
		RPGDemo = 411,
		ChenLingFes = 431,
		TeamTowers = 441,
	};
}
