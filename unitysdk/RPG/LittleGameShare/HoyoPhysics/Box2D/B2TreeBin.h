#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TreeBin_TypeDefinitionIndex = 35247;

	struct alignas(4) B2TreeBin
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0x10
		::System::Int32 count; // 0x20
	};
}
