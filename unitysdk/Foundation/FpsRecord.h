#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int FpsRecord_TypeDefinitionIndex = 7962;

	struct alignas(4) FpsRecord
	{
		::System::Single minFps; // 0x10
		::System::Single maxFps; // 0x14
		::System::Single avgFps; // 0x18
		::System::Int32 jankCount; // 0x1C
	};
}
