#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray1_1.h"
#include "unitysdk/Foundation/NativeMemoryAllocation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define FOUNDATION_NATIVETEMPMEMORY1_GETSLOT_OFFSET UNITYSDK_OFFSET(0xAB2850)

namespace Foundation
{
	inline static constexpr unsigned int NativeTempMemory1_TypeDefinitionIndex = 8874;

	struct alignas(8) NativeTempMemory1
	{
		::Foundation::FixedArray1_1<::Foundation::NativeMemoryAllocation> Slots; // 0x10
		::Unity::Collections::NativeArray_1<::System::Byte> Storage; // 0x28
		::System::Int32 StartOffset; // 0x38

		::Foundation::NativeMemoryAllocation GetSlot(::System::Int32 slotIndex)
		{
			return ((::Foundation::NativeMemoryAllocation(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORY1_GETSLOT_OFFSET))(this, slotIndex);
		}
	};
}
