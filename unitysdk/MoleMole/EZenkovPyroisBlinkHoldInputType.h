#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EZenkovPyroisBlinkHoldInputType_TypeDefinitionIndex = 83142;

	enum class EZenkovPyroisBlinkHoldInputType : ::System::Int32
	{
		Click = 1,
		ClickAndInteract = 2,
		Hold = 0,
	};
}
