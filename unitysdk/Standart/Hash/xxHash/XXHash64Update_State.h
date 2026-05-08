#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Standart/Hash/xxHash/XXHash64Update_State__mem64_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

namespace Standart::Hash::xxHash
{
	inline static constexpr unsigned int XXHash64Update_State_TypeDefinitionIndex = 7702;

	struct alignas(8) XXHash64Update_State
	{
		::System::UInt64 total_len; // 0x10
		::System::UInt64 v1; // 0x18
		::System::UInt64 v2; // 0x20
		::System::UInt64 v3; // 0x28
		::System::UInt64 v4; // 0x30
		::Standart::Hash::xxHash::XXHash64Update_State__mem64_e__FixedBuffer mem64; // 0x38
		::System::UInt32 memsize; // 0x58
		::System::UInt64 seed; // 0x60
	};
}
