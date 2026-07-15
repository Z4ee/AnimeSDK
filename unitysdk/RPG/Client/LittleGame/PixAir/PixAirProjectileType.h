#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirProjectileType_TypeDefinitionIndex = 41089;

	enum class PixAirProjectileType : ::System::Int32
	{
		Invalid = 0,
		Missle = 1,
		Bullet = 2,
		Laser = 3,
	};
}
