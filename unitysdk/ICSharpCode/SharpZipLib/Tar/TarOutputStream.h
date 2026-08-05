#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace ICSharpCode::SharpZipLib::Tar { class TarBuffer; }
namespace ICSharpCode::SharpZipLib::Tar { class TarEntry; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_CLOSEENTRY_OFFSET UNITYSDK_OFFSET(0x1F987480)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1F9875D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_FINISH_OFFSET UNITYSDK_OFFSET(0x1F987420)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1F9873F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GETRECORDSIZE_OFFSET UNITYSDK_OFFSET(0x1F9876B0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1F987210)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1F987240)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1F987270)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_ISENTRYOPEN_OFFSET UNITYSDK_OFFSET(0x1F987470)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1F9871D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1F9872A0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F9872D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_RECORDSIZE_OFFSET UNITYSDK_OFFSET(0x1F987690)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_PUTNEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1F9876D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1F987390)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1F9873C0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1F987330)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1F987360)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1F9871F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F987300)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1F987B30)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_WRITEEOFBLOCK_OFFSET UNITYSDK_OFFSET(0x1F987590)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1F987BB0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F987100)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9870F0)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int TarOutputStream_TypeDefinitionIndex = 6825;

	class TarOutputStream : public ::System::IO::Stream
	{
	public:
		::ICSharpCode::SharpZipLib::Tar::TarBuffer* buffer; // 0x28
		::System::IO::Stream* outputStream; // 0x30
		::Il2CppArray<::System::Byte>* blockBuffer; // 0x38
		::Il2CppArray<::System::Byte>* assemblyBuffer; // 0x40
		::System::Int64 currBytes; // 0x48
		::System::Boolean isClosed; // 0x50
		::System::Int32 assemblyBufferLength; // 0x54
		::System::Int64 currSize; // 0x58

		::System::Void _ctor(::System::IO::Stream* outputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM__CTOR_OFFSET))(this, outputStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* outputStream, ::System::Int32 blockFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM__CTOR_1_OFFSET))(this, outputStream, blockFactor);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_FINISH_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Int32 get_RecordSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_RECORDSIZE_OFFSET))(this);
		}

		::System::Int32 GetRecordSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GETRECORDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsEntryOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_GET_ISENTRYOPEN_OFFSET))(this);
		}

		::System::Void PutNextEntry(::ICSharpCode::SharpZipLib::Tar::TarEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_PUTNEXTENTRY_OFFSET))(this, entry);
		}

		::System::Void CloseEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_CLOSEENTRY_OFFSET))(this);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void WriteEofBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TAROUTPUTSTREAM_WRITEEOFBLOCK_OFFSET))(this);
		}
	};
}
