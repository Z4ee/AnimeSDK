#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Capsule.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainSegment.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Circle.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Polygon.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Segment.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ShapeUnion_TypeDefinitionIndex = 35222;

	struct alignas(4) B2ShapeUnion
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule capsule; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle circle; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon polygon; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment segment; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment chainSegment; // 0x10
	};
}
