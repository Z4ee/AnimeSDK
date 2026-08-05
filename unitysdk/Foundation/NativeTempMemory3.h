#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/Foundation/NativeMemoryAllocation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define FOUNDATION_NATIVETEMPMEMORY3_GETSLOT_OFFSET UNITYSDK_OFFSET(0xAB2900)

namespace Foundation
{
	inline static constexpr unsigned int NativeTempMemory3_TypeDefinitionIndex = 8602;

	struct alignas(8) NativeTempMemory3
	{
		::Foundation::FixedArray3_1<::Foundation::NativeMemoryAllocation> Slots; // 0x10
		::Unity::Collections::NativeArray_1<::System::Byte> Storage; // 0x58
		::System::Int32 StartOffset; // 0x68

		::Foundation::NativeMemoryAllocation GetSlot(::System::Int32 slotIndex)
		{
			return ((::Foundation::NativeMemoryAllocation(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORY3_GETSLOT_OFFSET))(this, slotIndex);
		}
	};
}
