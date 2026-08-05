#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NATIVEMEMORYBLOB_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3CCD40)
#define FOUNDATION_NATIVEMEMORYBLOB_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F9BFAF0)
#define FOUNDATION_NATIVEMEMORYBLOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9BFBB0)
#define FOUNDATION_NATIVEMEMORYBLOB__CTOR_OFFSET UNITYSDK_OFFSET(0xABE070)

namespace Foundation
{
	inline static constexpr unsigned int NativeMemoryBlob_TypeDefinitionIndex = 8494;

	struct alignas(8) NativeMemoryBlob
	{
		static ::Foundation::NativeMemoryBlob* StaticGet_Null()
		{
			return (::Foundation::NativeMemoryBlob*)Il2CppClass::FromTypeDefinitionIndex(NativeMemoryBlob_TypeDefinitionIndex)->GetStaticField(0x3CB0);
		}
		::Foundation::NativeMemoryView_1<::System::Byte> _handle; // 0x10

		::System::Void _ctor(::Foundation::NativeMemoryView_1<::System::Byte> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryView_1<::System::Byte>))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYBLOB__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYBLOB__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYBLOB_GET_ISNULL_OFFSET))(this);
		}

		/*
		static ::Foundation::ReadOnlyNativeMemoryBlob op_Implicit(::Foundation::NativeMemoryBlob instance)
		{
			return ((::Foundation::ReadOnlyNativeMemoryBlob(*)(::Foundation::NativeMemoryBlob))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYBLOB_OP_IMPLICIT_OFFSET))(instance);
		}
		*/
	};
}
