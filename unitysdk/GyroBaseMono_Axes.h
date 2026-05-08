#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int GyroBaseMono_Axes_TypeDefinitionIndex = 8332;

enum class GyroBaseMono_Axes : ::System::Int32
{
	XZ = 1,
	YX = 3,
	ZY = 5,
	YZ = 2,
	XY = 0,
	ZX = 4,
};
