#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::UI::FlowerShop
{
	inline static constexpr unsigned int ESlotType_TypeDefinitionIndex = 52013;

	enum class ESlotType : ::System::Int32
	{
		Slot3 = 3,
		InValid = -1,
		Slot2 = 2,
		Slot1 = 1,
		Base = 0,
	};
}
