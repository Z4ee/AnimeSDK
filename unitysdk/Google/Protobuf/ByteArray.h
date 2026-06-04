#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOOGLE_PROTOBUF_BYTEARRAY_COPY_OFFSET UNITYSDK_OFFSET(0x17E36320)
#define GOOGLE_PROTOBUF_BYTEARRAY_REVERSE_OFFSET UNITYSDK_OFFSET(0x17E363B0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ByteArray_TypeDefinitionIndex = 5365;

	class ByteArray : public ::System::Object
	{
	public:
		static ::System::Void Copy(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTEARRAY_COPY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Reverse(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTEARRAY_REVERSE_OFFSET))(a1, a2);
		}
	};
}
