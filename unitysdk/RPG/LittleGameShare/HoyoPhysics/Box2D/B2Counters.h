#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray24_1.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Counters_TypeDefinitionIndex = 35090;

	struct alignas(4) B2Counters
	{
		::System::Int32 bodyCount; // 0x10
		::System::Int32 shapeCount; // 0x14
		::System::Int32 contactCount; // 0x18
		::System::Int32 jointCount; // 0x1C
		::System::Int32 islandCount; // 0x20
		::System::Int32 stackUsed; // 0x24
		::System::Int32 staticTreeHeight; // 0x28
		::System::Int32 treeHeight; // 0x2C
		::System::Int32 byteCount; // 0x30
		::System::Int32 taskCount; // 0x34
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray24_1<::System::Int32> colorCounts; // 0x38
	};
}
