#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray2_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ManifoldPoint.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Manifold_TypeDefinitionIndex = 35156;

	struct alignas(4) B2Manifold
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal; // 0x10
		::System::Single rollingImpulse; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray2_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ManifoldPoint> points; // 0x1C
		::System::Int32 pointCount; // 0x7C
	};
}
