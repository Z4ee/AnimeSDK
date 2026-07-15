#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SetItem.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2HashSet_TypeDefinitionIndex = 35135;

	struct alignas(8) B2HashSet
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SetItem>* items; // 0x10
		::System::Int32 capacity; // 0x18
		::System::UInt32 count; // 0x1C
	};
}
