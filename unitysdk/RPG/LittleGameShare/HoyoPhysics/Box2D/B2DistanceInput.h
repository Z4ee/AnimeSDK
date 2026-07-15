#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2DistanceInput_TypeDefinitionIndex = 35109;

	struct alignas(4) B2DistanceInput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxyA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxyB; // 0x58
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transformA; // 0xA0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transformB; // 0xB0
		::System::Boolean useRadii; // 0xC0
	};
}
