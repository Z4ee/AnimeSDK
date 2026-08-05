#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace ICSharpCode::SharpZipLib::Zip { class ZipFile; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1FC5BFB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1FC5C280)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1FC5C370)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1FC5C360)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1FC5C380)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1FC5C350)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1FC5C340)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1FC5C290)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1FC5BEB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1FC5BFC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1FC5C1B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1FC5C160)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1FC5C2A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1FC5C110)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5BE20)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_PartialInputStream_TypeDefinitionIndex = 6879;

	class ZipFile_PartialInputStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* baseStream_; // 0x28
		::ICSharpCode::SharpZipLib::Zip::ZipFile* zipFile_; // 0x30
		::System::Int64 readPos_; // 0x38
		::System::Int64 length_; // 0x40
		::System::Int64 end_; // 0x48
		::System::Int64 start_; // 0x50

		::System::Void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile* zipFile, ::System::Int64 start, ::System::Int64 length)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM__CTOR_OFFSET))(this, zipFile, start, length);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_PARTIALINPUTSTREAM_GET_CANTIMEOUT_OFFSET))(this);
		}
	};
}
