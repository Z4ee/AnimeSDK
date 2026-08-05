#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_EStickState_TypeDefinitionIndex = 62803;

	enum class UIGalgamePageController_EStickState : ::System::Int32
	{
		WaitReStartGyro = 2,
		Stick = 1,
		Gyro = 0,
	};
}
