#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Sensor; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SensorTaskContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SensorQueryContext_TypeDefinitionIndex = 35205;

	struct alignas(8) B2SensorQueryContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorTaskContext* taskContext; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sensor* sensor; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* sensorShape; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transform; // 0x30
	};
}
