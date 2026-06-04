#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipItemChangeType_TypeDefinitionIndex = 73592;

	enum class PixAirEquipItemChangeType : ::System::Int32
	{
		ENone = 0,
		ENewAdd = 1,
		EUpdateLevel = 2,
		EEnchant = 3,
		EOther = 4,
		ERemove = 5,
		EMove = 6,
		ESwap = 7,
	};
}
