#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TreeNodeConnectionUnion_TypeDefinitionIndex = 35249;

	struct alignas(4) B2TreeNodeConnectionUnion
	{
		::System::Int32 parent; // 0x10
		::System::Int32 next; // 0x10
	};
}
