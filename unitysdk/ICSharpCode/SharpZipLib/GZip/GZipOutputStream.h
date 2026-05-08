#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/GZip/GZipOutputStream_OutputState.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/Compression/Streams/DeflaterOutputStream.h"

namespace ICSharpCode::SharpZipLib::Checksums { class Crc32; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C45D3E0)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_FINISH_OFFSET UNITYSDK_OFFSET(0x1C45D480)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_GETLEVEL_OFFSET UNITYSDK_OFFSET(0x1C45D110)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1C45D090)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x1C45D200)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C45D130)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C45D010)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45CF90)

namespace ICSharpCode::SharpZipLib::GZip
{
	inline static constexpr unsigned int GZipOutputStream_TypeDefinitionIndex = 6675;

	class GZipOutputStream : public ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream
	{
	public:
		::ICSharpCode::SharpZipLib::Checksums::Crc32* crc; // 0x60
		::ICSharpCode::SharpZipLib::GZip::GZipOutputStream_OutputState state_; // 0x68

		::System::Void _ctor(::System::IO::Stream* baseOutputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM__CTOR_OFFSET))(this, baseOutputStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* baseOutputStream, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM__CTOR_1_OFFSET))(this, baseOutputStream, size);
		}

		::System::Void SetLevel(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_SETLEVEL_OFFSET))(this, level);
		}

		::System::Int32 GetLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_GETLEVEL_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_FINISH_OFFSET))(this);
		}

		::System::Void WriteHeader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPOUTPUTSTREAM_WRITEHEADER_OFFSET))(this);
		}
	};
}
