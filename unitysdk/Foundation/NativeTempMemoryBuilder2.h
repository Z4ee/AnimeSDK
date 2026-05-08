#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray2_1.h"
#include "unitysdk/Foundation/NativeMemoryRequest.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NATIVETEMPMEMORYBUILDER2_REQUESTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9C7800)
#define FOUNDATION_NATIVETEMPMEMORYBUILDER2__CTOR_OFFSET UNITYSDK_OFFSET(0x9C7740)

namespace Foundation
{
	inline static constexpr unsigned int NativeTempMemoryBuilder2_TypeDefinitionIndex = 9035;

	struct alignas(8) NativeTempMemoryBuilder2
	{
		::System::Int32 _alignment; // 0x10
		::Foundation::FixedArray2_1<::Foundation::NativeMemoryRequest> _requests; // 0x18

		/*
		::System::Void _ctor(::System::Int32 alignment, ::Foundation::FixedArray1_1<::Foundation::NativeMemoryRequest> requests, ::Foundation::NativeMemoryRequest newRequest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::FixedArray1_1<::Foundation::NativeMemoryRequest>, ::Foundation::NativeMemoryRequest))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER2__CTOR_OFFSET))(this, alignment, requests, newRequest);
		}
		*/

		/*
		::Foundation::NativeTempMemoryBuilder3 RequestInternal(::Foundation::NativeMemoryRequest& request)
		{
			return ((::Foundation::NativeTempMemoryBuilder3(*)(::PVOID, ::Foundation::NativeMemoryRequest&))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER2_REQUESTINTERNAL_OFFSET))(this, request);
		}
		*/
	};
}
