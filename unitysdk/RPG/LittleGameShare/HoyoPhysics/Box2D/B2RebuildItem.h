#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2RebuildItem_TypeDefinitionIndex = 35189;

	struct alignas(4) B2RebuildItem
	{
		::System::Int32 nodeIndex; // 0x10
		::System::Int32 childCount; // 0x14
		::System::Int32 startIndex; // 0x18
		::System::Int32 splitIndex; // 0x1C
		::System::Int32 endIndex; // 0x20
	};
}
