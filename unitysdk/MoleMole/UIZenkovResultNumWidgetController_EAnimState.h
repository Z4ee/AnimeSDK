#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultNumWidgetController_EAnimState_TypeDefinitionIndex = 60833;

	enum class UIZenkovResultNumWidgetController_EAnimState : ::System::Int32
	{
		PrepareLoop = 1,
		Idle = 0,
		End = 3,
		PrepareEnd = 2,
	};
}
