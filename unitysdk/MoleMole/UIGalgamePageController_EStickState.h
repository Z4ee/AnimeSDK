#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_EStickState_TypeDefinitionIndex = 54891;

	enum class UIGalgamePageController_EStickState : ::System::Int32
	{
		WaitReStartGyro = 2,
		Gyro = 0,
		Stick = 1,
	};
}
