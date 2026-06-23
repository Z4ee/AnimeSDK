#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_PlayState_TypeDefinitionIndex = 69636;

	enum class UIMissionTipsContainerWidgetController_PlayState : ::System::Int32
	{
		Playing = 1,
		None = 0,
		HallRefreshStop = 3,
		Pausing = 2,
	};
}
