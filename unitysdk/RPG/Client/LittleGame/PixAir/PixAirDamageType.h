#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirDamageType_TypeDefinitionIndex = 73355;

	enum class PixAirDamageType : ::System::Int32
	{
		Direct = 0,
		Burn = 1,
	};
}
