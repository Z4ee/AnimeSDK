#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/Foundation/NativeMemoryRequest.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NATIVETEMPMEMORYBUILDER3_BUILD_OFFSET UNITYSDK_OFFSET(0xAD2A40)
#define FOUNDATION_NATIVETEMPMEMORYBUILDER3__CTOR_OFFSET UNITYSDK_OFFSET(0xAD2930)

namespace Foundation
{
	inline static constexpr unsigned int NativeTempMemoryBuilder3_TypeDefinitionIndex = 8698;

	struct alignas(8) NativeTempMemoryBuilder3
	{
		::System::Int32 _alignment; // 0x10
		::Foundation::FixedArray3_1<::Foundation::NativeMemoryRequest> _requests; // 0x18

		/*
		::System::Void _ctor(::System::Int32 alignment, ::Foundation::FixedArray2_1<::Foundation::NativeMemoryRequest> requests, ::Foundation::NativeMemoryRequest newRequest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::FixedArray2_1<::Foundation::NativeMemoryRequest>, ::Foundation::NativeMemoryRequest))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER3__CTOR_OFFSET))(this, alignment, requests, newRequest);
		}
		*/

		/*
		::Foundation::NativeTempMemory3 Build()
		{
			return ((::Foundation::NativeTempMemory3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER3_BUILD_OFFSET))(this);
		}
		*/
	};
}
