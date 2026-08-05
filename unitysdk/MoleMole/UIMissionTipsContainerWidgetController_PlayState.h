#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_PlayState_TypeDefinitionIndex = 91209;

	enum class UIMissionTipsContainerWidgetController_PlayState : ::System::Int32
	{
		None = 0,
		Playing = 1,
		Pausing = 2,
		HallRefreshStop = 3,
	};
}
