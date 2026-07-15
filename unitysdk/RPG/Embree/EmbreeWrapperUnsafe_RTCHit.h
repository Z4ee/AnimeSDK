#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapperUnsafe_RTCHit_TypeDefinitionIndex = 45251;

	struct alignas(4) EmbreeWrapperUnsafe_RTCHit
	{
		::System::Single Ng_x; // 0x10
		::System::Single Ng_y; // 0x14
		::System::Single Ng_z; // 0x18
		::System::Single u; // 0x1C
		::System::Single v; // 0x20
		::System::UInt32 primID; // 0x24
		::System::UInt32 geomID; // 0x28
		::System::UInt32 instID_0; // 0x2C
	};
}
