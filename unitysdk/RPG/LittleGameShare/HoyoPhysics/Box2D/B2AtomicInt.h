#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2AtomicInt_TypeDefinitionIndex = 35035;

	struct alignas(4) B2AtomicInt
	{
		::System::Int32 value; // 0x10
	};
}
