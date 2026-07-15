#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TOIState.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TOIOutput_TypeDefinitionIndex = 35240;

	struct alignas(4) B2TOIOutput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TOIState state; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 point; // 0x14
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal; // 0x1C
		::System::Single fraction; // 0x24
	};
}
