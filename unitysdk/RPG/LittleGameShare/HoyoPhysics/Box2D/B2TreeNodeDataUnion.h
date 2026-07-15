#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TreeNodeDataUnion_TypeDefinitionIndex = 35250;

	struct alignas(8) B2TreeNodeDataUnion
	{
		::System::Int32 child1; // 0x10
		::System::Int32 child2; // 0x14
		::System::UInt64 userData; // 0x10
	};
}
