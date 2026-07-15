#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Capsule.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryFilter.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2PlaneResultFcn; }
namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WorldMoverContext_TypeDefinitionIndex = 35269;

	struct alignas(8) B2WorldMoverContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2PlaneResultFcn* fcn; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter filter; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule mover; // 0x30
		::System::Object* userContext; // 0x48
	};
}
