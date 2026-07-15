#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Sweep.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TOIInput_TypeDefinitionIndex = 35239;

	struct alignas(4) B2TOIInput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxyA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxyB; // 0x58
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep sweepA; // 0xA0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep sweepB; // 0xC8
		::System::Single maxFraction; // 0xF0
	};
}
