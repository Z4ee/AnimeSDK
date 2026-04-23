#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PROTOBUF_BYTEARRAY_COPY_OFFSET UNITYSDK_OFFSET(0x1738EB00)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int ByteArray_TypeDefinitionIndex = 33620;

	class ByteArray : public ::System::Object
	{
	public:
		static ::System::Void Copy(::Il2CppArray<::System::Byte>* src, ::System::Int32 srcOffset, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTEARRAY_COPY_OFFSET))(src, srcOffset, dst, dstOffset, count);
		}
	};
}
