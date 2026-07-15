#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ShapeExtent_TypeDefinitionIndex = 35217;

	struct alignas(4) B2ShapeExtent
	{
		::System::Single minExtent; // 0x10
		::System::Single maxExtent; // 0x14
	};
}
