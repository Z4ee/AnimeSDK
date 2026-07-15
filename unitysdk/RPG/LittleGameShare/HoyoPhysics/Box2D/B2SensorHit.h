#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SensorHit_TypeDefinitionIndex = 35203;

	struct alignas(4) B2SensorHit
	{
		::System::Int32 sensorId; // 0x10
		::System::Int32 visitorId; // 0x14
	};
}
