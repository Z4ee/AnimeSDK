#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyPackStatistics_TypeDefinitionIndex = 59508;

	struct alignas(8) AlleyPackStatistics
	{
		::System::UInt32 AutoPlaceCount; // 0x10
		::System::UInt32 AutoDeleteCount; // 0x14
		::System::UInt32 DragCount; // 0x18
		::System::UInt32 RotateCount; // 0x1C
		::System::UInt32 DeleteCount; // 0x20
		::System::UInt32 PerspectiveChangeCount; // 0x24
		::System::UInt64 BeginTimeStamp; // 0x28
		::System::UInt64 EndTimeStamp; // 0x30
	};
}
