#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C4EE420)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C4EE440)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1C4EE430)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1C4EE4A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1C4EE470)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C4EE4B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C4EE4C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C4EE500)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1C4EE510)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4EE520)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C4EE4F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C4EE530)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EE3C0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_UncompressedStream_TypeDefinitionIndex = 6743;

	class ZipFile_UncompressedStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* baseStream_; // 0x28

		::System::Void _ctor(::System::IO::Stream* baseStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM__CTOR_OFFSET))(this, baseStream);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UNCOMPRESSEDSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}
	};
}
