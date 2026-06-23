#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController_ClickMode_TypeDefinitionIndex = 40291;

	enum class UIMissionTipsRowWidgetController_ClickMode : ::System::Int32
	{
		OpenMap = 4,
		knot = 3,
		None = 0,
		ChangeTrack = 1,
		Interact = 2,
	};
}
