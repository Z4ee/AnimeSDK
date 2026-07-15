#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Array_1_TypeDefinitionIndex = 35030;

	template <typename T>
	struct B2Array_1
	{
		::Il2CppArray<T>* data; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 capacity; // 0x0
	};
}
