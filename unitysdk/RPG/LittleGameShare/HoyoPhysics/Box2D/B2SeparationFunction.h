#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SeparationType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Sweep.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SeparationFunction_TypeDefinitionIndex = 35209;

	struct alignas(4) B2SeparationFunction
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxyA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxyB; // 0x58
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep sweepA; // 0xA0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep sweepB; // 0xC8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localPoint; // 0xF0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 axis; // 0xF8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SeparationType type; // 0x100
	};
}
