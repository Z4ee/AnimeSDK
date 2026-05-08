#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController_EStickState_TypeDefinitionIndex = 38780;

	enum class UIMindscapeWidgetController_EStickState : ::System::Int32
	{
		Stick = 1,
		WaitReStartGyro = 2,
		Gyro = 0,
	};
}
