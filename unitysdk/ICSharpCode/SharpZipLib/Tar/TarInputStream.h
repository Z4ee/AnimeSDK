#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace ICSharpCode::SharpZipLib::Tar { class TarBuffer; }
namespace ICSharpCode::SharpZipLib::Tar { class TarEntry; }
namespace ICSharpCode::SharpZipLib::Tar { class TarInputStream_IEntryFactory; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C2110B0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_COPYENTRYCONTENTS_OFFSET UNITYSDK_OFFSET(0x1C2116E0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C211340)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GETNEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1C20EBB0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GETRECORDSIZE_OFFSET UNITYSDK_OFFSET(0x1C211550)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C211570)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1C211240)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1C211270)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1C211280)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_ISMARKSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C211610)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1C211220)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C211290)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C2112C0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_RECORDSIZE_OFFSET UNITYSDK_OFFSET(0x1C20EA70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_MARK_OFFSET UNITYSDK_OFFSET(0x1C211620)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1C2114B0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C20FEC0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_RESET_OFFSET UNITYSDK_OFFSET(0x1C211630)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1C211370)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SETENTRYFACTORY_OFFSET UNITYSDK_OFFSET(0x1C211540)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C2113C0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1C20EAD0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C2112F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SKIPTONEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1C211640)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SKIP_OFFSET UNITYSDK_OFFSET(0x1C211580)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1C211460)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C211410)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C20E010)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2111B0)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int TarInputStream_TypeDefinitionIndex = 6687;

	class TarInputStream : public ::System::IO::Stream
	{
	public:
		::ICSharpCode::SharpZipLib::Tar::TarBuffer* tarBuffer; // 0x28
		::Il2CppArray<::System::Byte>* readBuffer; // 0x30
		::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory* entryFactory; // 0x38
		::System::IO::Stream* inputStream; // 0x40
		::ICSharpCode::SharpZipLib::Tar::TarEntry* currentEntry; // 0x48
		::System::Int64 entryOffset; // 0x50
		::System::Boolean hasHitEOF; // 0x58
		::System::Int64 entrySize; // 0x60

		::System::Void _ctor(::System::IO::Stream* inputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM__CTOR_OFFSET))(this, inputStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* inputStream, ::System::Int32 blockFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM__CTOR_1_OFFSET))(this, inputStream, blockFactor);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void SetEntryFactory(::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory* factory)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SETENTRYFACTORY_OFFSET))(this, factory);
		}

		::System::Int32 get_RecordSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_RECORDSIZE_OFFSET))(this);
		}

		::System::Int32 GetRecordSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GETRECORDSIZE_OFFSET))(this);
		}

		::System::Int64 get_Available()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Void Skip(::System::Int64 skipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SKIP_OFFSET))(this, skipCount);
		}

		::System::Boolean get_IsMarkSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GET_ISMARKSUPPORTED_OFFSET))(this);
		}

		::System::Void Mark(::System::Int32 markLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_MARK_OFFSET))(this, markLimit);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_RESET_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Tar::TarEntry* GetNextEntry()
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_GETNEXTENTRY_OFFSET))(this);
		}

		::System::Void CopyEntryContents(::System::IO::Stream* outputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_COPYENTRYCONTENTS_OFFSET))(this, outputStream);
		}

		::System::Void SkipToNextEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_SKIPTONEXTENTRY_OFFSET))(this);
		}
	};
}
