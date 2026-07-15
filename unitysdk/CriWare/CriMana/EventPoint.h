#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int EventPoint_TypeDefinitionIndex = 38056;

	struct alignas(8) EventPoint
	{
		::System::IntPtr cueName; // 0x10
		::System::UInt32 cueNameSize; // 0x18
		::System::UInt64 time; // 0x20
		::System::UInt64 tunit; // 0x28
		::System::Int32 type; // 0x30
		::System::IntPtr paramString; // 0x38
		::System::UInt32 paramStringSize; // 0x40
		::System::UInt32 cntCallback; // 0x44
	};
}
