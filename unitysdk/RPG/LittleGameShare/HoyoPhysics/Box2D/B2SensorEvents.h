#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEndTouchEvent.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SensorEvents_TypeDefinitionIndex = 35202;

	struct alignas(8) B2SensorEvents
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent>* beginEvents; // 0x10
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent>* endEvents; // 0x18
		::System::Int32 beginCount; // 0x20
		::System::Int32 endCount; // 0x24
	};
}
