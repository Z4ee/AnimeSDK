#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/Compression/Streams/InflaterInputStream.h"

namespace ICSharpCode::SharpZipLib::Checksums { class Crc32; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipInputStream_ReadDataHandler; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_BODYREAD_OFFSET UNITYSDK_OFFSET(0x1C1087E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_CLOSEENTRY_OFFSET UNITYSDK_OFFSET(0x1C107890)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C107A60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_COMPLETECLOSEENTRY_OFFSET UNITYSDK_OFFSET(0x1C107EB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GETNEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1C106FD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C108160)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_CANDECOMPRESSENTRY_OFFSET UNITYSDK_OFFSET(0x1C106FB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C108170)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1C106F90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_INITIALREAD_OFFSET UNITYSDK_OFFSET(0x1C108350)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1C108220)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATADESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C107AF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READINGNOTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C1082B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READINGNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C108300)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C108020)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1C106FA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C106EF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C106E50)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipInputStream_TypeDefinitionIndex = 6756;

	class ZipInputStream : public ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream
	{
	public:
		::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry; // 0x50
		::ICSharpCode::SharpZipLib::Checksums::Crc32* crc; // 0x58
		::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler* internalReader; // 0x60
		::System::String* password; // 0x68
		::System::Int32 method; // 0x70
		::System::Int32 flags; // 0x74
		::System::Int64 size; // 0x78

		::System::Void _ctor(::System::IO::Stream* baseInputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM__CTOR_OFFSET))(this, baseInputStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* baseInputStream, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM__CTOR_1_OFFSET))(this, baseInputStream, bufferSize);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Boolean get_CanDecompressEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_CANDECOMPRESSENTRY_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* GetNextEntry()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GETNEXTENTRY_OFFSET))(this);
		}

		::System::Void ReadDataDescriptor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATADESCRIPTOR_OFFSET))(this);
		}

		::System::Void CompleteCloseEntry(::System::Boolean testCrc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_COMPLETECLOSEENTRY_OFFSET))(this, testCrc);
		}

		::System::Void CloseEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_CLOSEENTRY_OFFSET))(this);
		}

		::System::Int32 get_Available()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int32 ReadingNotAvailable(::Il2CppArray<::System::Byte>* destination, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READINGNOTAVAILABLE_OFFSET))(this, destination, offset, count);
		}

		::System::Int32 ReadingNotSupported(::Il2CppArray<::System::Byte>* destination, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READINGNOTSUPPORTED_OFFSET))(this, destination, offset, count);
		}

		::System::Int32 InitialRead(::Il2CppArray<::System::Byte>* destination, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_INITIALREAD_OFFSET))(this, destination, offset, count);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 BodyRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_BODYREAD_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_CLOSE_OFFSET))(this);
		}
	};
}
