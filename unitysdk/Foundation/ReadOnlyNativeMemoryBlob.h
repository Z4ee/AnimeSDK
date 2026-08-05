#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_READONLYNATIVEMEMORYBLOB_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3CCD40)
#define FOUNDATION_READONLYNATIVEMEMORYBLOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F79F970)
#define FOUNDATION_READONLYNATIVEMEMORYBLOB__CTOR_OFFSET UNITYSDK_OFFSET(0xAB29E0)

namespace Foundation
{
	inline static constexpr unsigned int ReadOnlyNativeMemoryBlob_TypeDefinitionIndex = 8756;

	struct alignas(8) ReadOnlyNativeMemoryBlob
	{
		static ::Foundation::ReadOnlyNativeMemoryBlob* StaticGet_Null()
		{
			return (::Foundation::ReadOnlyNativeMemoryBlob*)Il2CppClass::FromTypeDefinitionIndex(ReadOnlyNativeMemoryBlob_TypeDefinitionIndex)->GetStaticField(0x3CC0);
		}
		::Foundation::NativeMemoryView_1<::System::Byte> _handle; // 0x10

		::System::Void _ctor(::Foundation::NativeMemoryView_1<::System::Byte> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryView_1<::System::Byte>))((::PBYTE)hIl2Cpp + FOUNDATION_READONLYNATIVEMEMORYBLOB__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_READONLYNATIVEMEMORYBLOB__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_READONLYNATIVEMEMORYBLOB_GET_ISNULL_OFFSET))(this);
		}
	};
}
