#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NATIVEMEMORYREQUEST_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x8EA1D0)
#define FOUNDATION_NATIVEMEMORYREQUEST_NEWBLOB_OFFSET UNITYSDK_OFFSET(0x1A5C6EB0)
#define FOUNDATION_NATIVEMEMORYREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C71A0)
#define FOUNDATION_NATIVEMEMORYREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA200)

namespace Foundation
{
	inline static constexpr unsigned int NativeMemoryRequest_TypeDefinitionIndex = 8912;

	struct alignas(8) NativeMemoryRequest
	{
		static ::Foundation::NativeMemoryRequest* StaticGet_Null()
		{
			return (::Foundation::NativeMemoryRequest*)Il2CppClass::FromTypeDefinitionIndex(NativeMemoryRequest_TypeDefinitionIndex)->GetStaticField(0x3F00);
		}
		::System::Int32 Alignment; // 0x10
		::System::Int32 Size; // 0x14
		::System::Int64 TypeHash; // 0x18
		::System::Int32 Number; // 0x20
		::System::UInt64 RequestId; // 0x28

		::System::Void _ctor(::System::Int32 alignment, ::System::Int32 size, ::System::Int64 typeHash, ::System::Int32 number, ::System::UInt64 requestId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUEST__CTOR_OFFSET))(this, alignment, size, typeHash, number, requestId);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUEST__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUEST_GET_ISNULL_OFFSET))(this);
		}

		static ::Foundation::NativeMemoryRequest NewBlob(::System::Int32 alignment, ::System::Int32 number)
		{
			return ((::Foundation::NativeMemoryRequest(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUEST_NEWBLOB_OFFSET))(alignment, number);
		}
	};
}
