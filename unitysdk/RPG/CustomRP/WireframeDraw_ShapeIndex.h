#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int WireframeDraw_ShapeIndex_TypeDefinitionIndex = 36385;

	struct alignas(4) WireframeDraw_ShapeIndex
	{
		::System::Int32 offset; // 0x10
		::System::Int32 instanceCount; // 0x14
	};
}
