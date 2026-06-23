#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_ALIGNTOBYTE_OFFSET UNITYSDK_OFFSET(0x1E864FD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E865180)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_GET_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1E864FC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_GET_ISFLUSHED_OFFSET UNITYSDK_OFFSET(0x1E865170)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1E864DF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1E865220)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITEBITS_OFFSET UNITYSDK_OFFSET(0x1E865060)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITEBLOCK_OFFSET UNITYSDK_OFFSET(0x1E864F90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1E864E00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITEINT_OFFSET UNITYSDK_OFFSET(0x1E864EB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITESHORTMSB_OFFSET UNITYSDK_OFFSET(0x1E865100)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITESHORT_OFFSET UNITYSDK_OFFSET(0x1E864E40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E864DB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E864D70)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int PendingBuffer_TypeDefinitionIndex = 6831;

	class PendingBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* buffer_; // 0x10
		::System::Int32 end; // 0x18
		::System::Int32 start; // 0x1C
		::System::UInt32 bits; // 0x20
		::System::Int32 bitCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER__CTOR_1_OFFSET))(this, bufferSize);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_RESET_OFFSET))(this);
		}

		::System::Void WriteByte(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void WriteShort(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITESHORT_OFFSET))(this, value);
		}

		::System::Void WriteInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITEINT_OFFSET))(this, value);
		}

		::System::Void WriteBlock(::Il2CppArray<::System::Byte>* block, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITEBLOCK_OFFSET))(this, block, offset, length);
		}

		::System::Int32 get_BitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_GET_BITCOUNT_OFFSET))(this);
		}

		::System::Void AlignToByte()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_ALIGNTOBYTE_OFFSET))(this);
		}

		::System::Void WriteBits(::System::Int32 b, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITEBITS_OFFSET))(this, b, count);
		}

		::System::Void WriteShortMSB(::System::Int32 s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_WRITESHORTMSB_OFFSET))(this, s);
		}

		::System::Boolean get_IsFlushed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_GET_ISFLUSHED_OFFSET))(this);
		}

		::System::Int32 Flush(::Il2CppArray<::System::Byte>* output, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_FLUSH_OFFSET))(this, output, offset, length);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_PENDINGBUFFER_TOBYTEARRAY_OFFSET))(this);
		}
	};
}
