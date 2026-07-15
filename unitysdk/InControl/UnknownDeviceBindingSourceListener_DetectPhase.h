#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceBindingSourceListener_DetectPhase_TypeDefinitionIndex = 38656;

	enum class UnknownDeviceBindingSourceListener_DetectPhase : ::System::Int32
	{
		WaitForInitialRelease = 0,
		WaitForControlPress = 1,
		WaitForControlRelease = 2,
	};
}
