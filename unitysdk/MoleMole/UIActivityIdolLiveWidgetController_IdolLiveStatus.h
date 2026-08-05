#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityIdolLiveWidgetController_IdolLiveStatus_TypeDefinitionIndex = 80165;

	enum class UIActivityIdolLiveWidgetController_IdolLiveStatus : ::System::Int32
	{
		Finish = 3,
		Live = 2,
		CountDown = 1,
		None = 0,
	};
}
