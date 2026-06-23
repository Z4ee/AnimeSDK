#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityIdolLiveWidgetController_IdolLiveStatus_TypeDefinitionIndex = 61290;

	enum class UIActivityIdolLiveWidgetController_IdolLiveStatus : ::System::Int32
	{
		Live = 2,
		CountDown = 1,
		None = 0,
		Finish = 3,
	};
}
