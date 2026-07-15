#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2AtomicU32_TypeDefinitionIndex = 35036;

	struct alignas(8) B2AtomicU32
	{
		::System::Int64 value; // 0x10
	};
}
