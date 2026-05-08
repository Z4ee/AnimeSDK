#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_PlayState_TypeDefinitionIndex = 55037;

	enum class UIMissionTipsContainerWidgetController_PlayState : ::System::Int32
	{
		Playing = 1,
		HallRefreshStop = 3,
		Pausing = 2,
		None = 0,
	};
}
