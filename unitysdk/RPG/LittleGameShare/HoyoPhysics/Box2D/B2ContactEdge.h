#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactEdge_TypeDefinitionIndex = 35075;

	struct alignas(4) B2ContactEdge
	{
		::System::Int32 bodyId; // 0x10
		::System::Int32 prevKey; // 0x14
		::System::Int32 nextKey; // 0x18
	};
}
