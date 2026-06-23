#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController_EStickState_TypeDefinitionIndex = 43477;

	enum class UIMindscapeWidgetController_EStickState : ::System::Int32
	{
		Stick = 1,
		Gyro = 0,
		WaitReStartGyro = 2,
	};
}
