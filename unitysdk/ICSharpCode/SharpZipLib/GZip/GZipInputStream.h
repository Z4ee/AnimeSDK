#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/Compression/Streams/InflaterInputStream.h"

namespace ICSharpCode::SharpZipLib::Checksums { class Crc32; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM_READFOOTER_OFFSET UNITYSDK_OFFSET(0x1E428610)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM_READHEADER_OFFSET UNITYSDK_OFFSET(0x1E427E90)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1E427DE0)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E427D80)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E427D20)

namespace ICSharpCode::SharpZipLib::GZip
{
	inline static constexpr unsigned int GZipInputStream_TypeDefinitionIndex = 6804;

	class GZipInputStream : public ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream
	{
	public:
		::ICSharpCode::SharpZipLib::Checksums::Crc32* crc; // 0x50
		::System::Boolean readGZIPHeader; // 0x58

		::System::Void _ctor(::System::IO::Stream* baseInputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM__CTOR_OFFSET))(this, baseInputStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* baseInputStream, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM__CTOR_1_OFFSET))(this, baseInputStream, size);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Boolean ReadHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM_READHEADER_OFFSET))(this);
		}

		::System::Void ReadFooter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPINPUTSTREAM_READFOOTER_OFFSET))(this);
		}
	};
}
