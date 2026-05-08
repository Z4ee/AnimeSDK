#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray1_1.h"
#include "unitysdk/Foundation/NativeMemoryRequest.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NATIVETEMPMEMORYBUILDER1_BUILD_OFFSET UNITYSDK_OFFSET(0x8EA2A0)
#define FOUNDATION_NATIVETEMPMEMORYBUILDER1_REQUESTINTERNAL_OFFSET UNITYSDK_OFFSET(0x8EA440)
#define FOUNDATION_NATIVETEMPMEMORYBUILDER1__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA240)

namespace Foundation
{
	inline static constexpr unsigned int NativeTempMemoryBuilder1_TypeDefinitionIndex = 8906;

	struct alignas(8) NativeTempMemoryBuilder1
	{
		::System::Int32 _alignment; // 0x10
		::Foundation::FixedArray1_1<::Foundation::NativeMemoryRequest> _requests; // 0x18

		::System::Void _ctor(::System::Int32 alignment, ::Foundation::NativeMemoryRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::NativeMemoryRequest))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER1__CTOR_OFFSET))(this, alignment, request);
		}

		/*
		::Foundation::NativeTempMemory1 Build()
		{
			return ((::Foundation::NativeTempMemory1(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER1_BUILD_OFFSET))(this);
		}
		*/

		/*
		::Foundation::NativeTempMemoryBuilder2 RequestInternal(::Foundation::NativeMemoryRequest& request)
		{
			return ((::Foundation::NativeTempMemoryBuilder2(*)(::PVOID, ::Foundation::NativeMemoryRequest&))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER1_REQUESTINTERNAL_OFFSET))(this, request);
		}
		*/
	};
}
