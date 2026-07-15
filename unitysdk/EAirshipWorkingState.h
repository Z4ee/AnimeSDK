#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EAirshipWorkingState_TypeDefinitionIndex = 45305;

enum class EAirshipWorkingState : ::System::Int32
{
	Floating = 0,
	Working = 1,
	WorkingToFloating = 2,
	FloatingToWorking = 3,
};
