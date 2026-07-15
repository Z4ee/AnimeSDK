#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2MoveResult; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2QueryPairContext_TypeDefinitionIndex = 35186;

	struct alignas(8) B2QueryPairContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MoveResult* moveResult; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType queryTreeType; // 0x20
		::System::Int32 queryProxyKey; // 0x24
		::System::Int32 queryShapeIndex; // 0x28
	};
}
