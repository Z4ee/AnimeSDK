#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController_EStickState_TypeDefinitionIndex = 78683;

	enum class UIMindscapeWidgetController_EStickState : ::System::Int32
	{
		Gyro = 0,
		Stick = 1,
		WaitReStartGyro = 2,
	};
}
