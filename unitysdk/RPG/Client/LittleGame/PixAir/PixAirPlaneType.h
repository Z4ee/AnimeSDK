#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirPlaneType_TypeDefinitionIndex = 41087;

	enum class PixAirPlaneType : ::System::Int32
	{
		Invalid = 0,
		Player = 1,
		Enemy = 2,
	};
}
