#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodyMoveEvent_TypeDefinitionIndex = 35048;

	struct alignas(8) B2BodyMoveEvent
	{
		::System::Object* userData; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transform; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId bodyId; // 0x28
		::System::Boolean fellAsleep; // 0x40
	};
}
