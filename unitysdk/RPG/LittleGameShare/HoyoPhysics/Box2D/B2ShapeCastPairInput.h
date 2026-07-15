#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ShapeCastPairInput_TypeDefinitionIndex = 35215;

	struct alignas(4) B2ShapeCastPairInput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxyA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxyB; // 0x58
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transformA; // 0xA0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transformB; // 0xB0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 translationB; // 0xC0
		::System::Single maxFraction; // 0xC8
		::System::Boolean canEncroach; // 0xCC
	};
}
