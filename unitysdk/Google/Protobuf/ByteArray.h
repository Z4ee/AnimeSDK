#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOOGLE_PROTOBUF_BYTEARRAY_COPY_OFFSET UNITYSDK_OFFSET(0x170D3BF0)
#define GOOGLE_PROTOBUF_BYTEARRAY_REVERSE_OFFSET UNITYSDK_OFFSET(0x170D3C90)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ByteArray_TypeDefinitionIndex = 6163;

	class ByteArray : public ::System::Object
	{
	public:
		static ::System::Void Copy(::Il2CppArray<::System::Byte>* src, ::System::Int32 srcOffset, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTEARRAY_COPY_OFFSET))(src, srcOffset, dst, dstOffset, count);
		}

		static ::System::Void Reverse(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTEARRAY_REVERSE_OFFSET))(bytes, length);
		}
	};
}
