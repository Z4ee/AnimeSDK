#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimCategory_TypeDefinitionIndex = 17468;

	enum class AnimCategory : ::System::Byte
	{
		None = 0x0,
		Hit = 0x1,
		Hit_H = 0x2,
		Die = 0x3,
		Die_Hit = 0x4,
		Die_Fly = 0x5,
		Die_Limbo = 0x6,
		Hit_Fly = 0x7,
		Hit_Fly_Recover = 0x8,
		Fly_Hit = 0x9,
		Revive = 0xA,
		StandBy = 0xB,
	};
}
