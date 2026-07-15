#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirEquipmentState_TypeDefinitionIndex = 41081;

	enum class PixAirEquipmentState : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		Jammed = 2,
	};
}
