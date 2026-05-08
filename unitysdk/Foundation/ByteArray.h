#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FOUNDATION_BYTEARRAY_GET_OFFSET UNITYSDK_OFFSET(0x1B05F1A0)
#define FOUNDATION_BYTEARRAY_INITBUF_OFFSET UNITYSDK_OFFSET(0x1B05F3D0)
#define FOUNDATION_BYTEARRAY_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B05F4A0)
#define FOUNDATION_BYTEARRAY_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B05F300)
#define FOUNDATION_BYTEARRAY_RESET_OFFSET UNITYSDK_OFFSET(0x1B05F510)
#define FOUNDATION_BYTEARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B05F5A0)
#define FOUNDATION_BYTEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B05F2F0)

namespace Foundation
{
	inline static constexpr unsigned int ByteArray_TypeDefinitionIndex = 8187;

	class ByteArray : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_byteBuf()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ByteArray_TypeDefinitionIndex)->GetStaticField(0x71D0);
		}
		static ::System::Collections::Generic::Queue_1<::Foundation::ByteArray*>** StaticGet__pool()
		{
			return (::System::Collections::Generic::Queue_1<::Foundation::ByteArray*>**)Il2CppClass::FromTypeDefinitionIndex(ByteArray_TypeDefinitionIndex)->GetStaticField(0x71D8);
		}
		::Il2CppArray<::System::Byte>* bytes; // 0x10
		::System::Int32 pos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAY__CCTOR_OFFSET))();
		}

		static ::Foundation::ByteArray* Get()
		{
			return ((::Foundation::ByteArray*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAY_GET_OFFSET))();
		}

		static ::System::Void Release(::Foundation::ByteArray* byteArray)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*))((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAY_RELEASE_OFFSET))(byteArray);
		}

		static ::System::Void InitBuf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAY_INITBUF_OFFSET))();
		}

		::System::Boolean movePosition(::System::Int32 distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAY_MOVEPOSITION_OFFSET))(this, distance);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAY_RESET_OFFSET))(this);
		}
	};
}
