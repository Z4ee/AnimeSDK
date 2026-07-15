#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BitSet_TypeDefinitionIndex = 35038;

	struct alignas(8) B2BitSet
	{
		::Il2CppArray<::System::UInt64>* bits; // 0x10
		::System::Int32 blockCapacity; // 0x18
		::System::Int32 blockCount; // 0x1C
	};
}
