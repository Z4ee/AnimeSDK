#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis3DInputType_TypeDefinitionIndex = 66975;

	enum class LogicAxis3DInputType : ::System::Int32
	{
		LinerAccelerometer = 4,
		Attitude = 3,
		RawGyroscope = 2,
		None = -1,
		Accelerometer = 1,
		Gyroscope = 0,
		RawAttitude = 5,
	};
}
