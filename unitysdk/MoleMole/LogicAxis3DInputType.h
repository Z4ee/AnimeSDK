#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis3DInputType_TypeDefinitionIndex = 41482;

	enum class LogicAxis3DInputType : ::System::Int32
	{
		LinerAccelerometer = 4,
		None = -1,
		RawGyroscope = 2,
		Accelerometer = 1,
		Attitude = 3,
		Gyroscope = 0,
		RawAttitude = 5,
	};
}
