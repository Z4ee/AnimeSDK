#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_RTCRay_TypeDefinitionIndex = 45244;

	struct alignas(4) EmbreeWrapper_RTCRay
	{
		::System::Single org_x; // 0x10
		::System::Single org_y; // 0x14
		::System::Single org_z; // 0x18
		::System::Single tnear; // 0x1C
		::System::Single dir_x; // 0x20
		::System::Single dir_y; // 0x24
		::System::Single dir_z; // 0x28
		::System::Single time; // 0x2C
		::System::Single tfar; // 0x30
		::System::UInt32 mask; // 0x34
		::System::UInt32 id; // 0x38
		::System::UInt32 flags; // 0x3C
	};
}
