#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TreePlane_TypeDefinitionIndex = 35252;

	struct alignas(4) B2TreePlane
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB leftAABB; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB rightAABB; // 0x20
		::System::Int32 leftCount; // 0x30
		::System::Int32 rightCount; // 0x34
	};
}
