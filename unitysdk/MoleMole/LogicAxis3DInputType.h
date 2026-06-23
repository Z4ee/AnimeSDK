#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis3DInputType_TypeDefinitionIndex = 79308;

	enum class LogicAxis3DInputType : ::System::Int32
	{
		RawAttitude = 5,
		LinerAccelerometer = 4,
		Attitude = 3,
		RawGyroscope = 2,
		Gyroscope = 0,
		Accelerometer = 1,
		None = -1,
	};
}
