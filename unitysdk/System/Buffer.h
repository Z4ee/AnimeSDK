#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }

#define SYSTEM_BUFFER_BLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x161BAA50)
#define SYSTEM_BUFFER_BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x161BA920)
#define SYSTEM_BUFFER_INDEXOFBYTE_OFFSET UNITYSDK_OFFSET(0x161BA680)
#define SYSTEM_BUFFER_INTERNALBLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x161BA670)
#define SYSTEM_BUFFER_MEMCPY1_OFFSET UNITYSDK_OFFSET(0x161BAF60)
#define SYSTEM_BUFFER_MEMCPY2_OFFSET UNITYSDK_OFFSET(0x161BAEE0)
#define SYSTEM_BUFFER_MEMCPY4_OFFSET UNITYSDK_OFFSET(0x161BAE10)
#define SYSTEM_BUFFER_MEMCPY_1_OFFSET UNITYSDK_OFFSET(0x161BA8E0)
#define SYSTEM_BUFFER_MEMCPY_2_OFFSET UNITYSDK_OFFSET(0x161BB000)
#define SYSTEM_BUFFER_MEMCPY_OFFSET UNITYSDK_OFFSET(0x161BA8A0)
#define SYSTEM_BUFFER_MEMORYCOPY_OFFSET UNITYSDK_OFFSET(0x161BAD90)
#define SYSTEM_BUFFER_ZEROMEMORY_OFFSET UNITYSDK_OFFSET(0x161BA840)
#define SYSTEM_BUFFER__BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x161BA7C0)

namespace System
{
	inline static constexpr unsigned int Buffer_TypeDefinitionIndex = 207;

	class Buffer : public ::System::Object
	{
	public:
		static ::System::Boolean InternalBlockCopy(::System::Array* src, ::System::Int32 srcOffsetBytes, ::System::Array* dst, ::System::Int32 dstOffsetBytes, ::System::Int32 byteCount)
		{
			return ((::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INTERNALBLOCKCOPY_OFFSET))(src, srcOffsetBytes, dst, dstOffsetBytes, byteCount);
		}

		static ::System::Int32 IndexOfByte(::System::Byte* src, ::System::Byte value, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INDEXOFBYTE_OFFSET))(src, value, index, count);
		}

		static ::System::Int32 _ByteLength(::System::Array* array)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER__BYTELENGTH_OFFSET))(array);
		}

		static ::System::Void ZeroMemory(::System::Byte* src, ::System::Int64 len)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_ZEROMEMORY_OFFSET))(src, len);
		}

		static ::System::Void Memcpy(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIndex, ::System::Byte* src, ::System::Int32 srcIndex, ::System::Int32 len)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_OFFSET))(dest, destIndex, src, srcIndex, len);
		}

		static ::System::Void Memcpy_1(::System::Byte* pDest, ::System::Int32 destIndex, ::Il2CppArray<::System::Byte>* src, ::System::Int32 srcIndex, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_1_OFFSET))(pDest, destIndex, src, srcIndex, len);
		}

		static ::System::Int32 ByteLength(::System::Array* array)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_BYTELENGTH_OFFSET))(array);
		}

		static ::System::Void BlockCopy(::System::Array* src, ::System::Int32 srcOffset, ::System::Array* dst, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_BLOCKCOPY_OFFSET))(src, srcOffset, dst, dstOffset, count);
		}

		static ::System::Void MemoryCopy(::System::Void* source, ::System::Void* destination, ::System::Int64 destinationSizeInBytes, ::System::Int64 sourceBytesToCopy)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMORYCOPY_OFFSET))(source, destination, destinationSizeInBytes, sourceBytesToCopy);
		}

		static ::System::Void memcpy4(::System::Byte* dest, ::System::Byte* src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY4_OFFSET))(dest, src, size);
		}

		static ::System::Void memcpy2(::System::Byte* dest, ::System::Byte* src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY2_OFFSET))(dest, src, size);
		}

		static ::System::Void memcpy1(::System::Byte* dest, ::System::Byte* src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY1_OFFSET))(dest, src, size);
		}

		static ::System::Void Memcpy_2(::System::Byte* dest, ::System::Byte* src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_2_OFFSET))(dest, src, size);
		}
	};
}
