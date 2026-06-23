#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1D67D4A0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x1D67D2B0)

namespace ICSharpCode::SharpZipLib::BZip2
{
	inline static constexpr unsigned int BZip2_TypeDefinitionIndex = 6764;

	class BZip2 : public ::System::Object
	{
	public:
		static ::System::Void Decompress(::System::IO::Stream* inStream, ::System::IO::Stream* outStream, ::System::Boolean isStreamOwner)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2_DECOMPRESS_OFFSET))(inStream, outStream, isStreamOwner);
		}

		static ::System::Void Compress(::System::IO::Stream* inStream, ::System::IO::Stream* outStream, ::System::Boolean isStreamOwner, ::System::Int32 level)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2_COMPRESS_OFFSET))(inStream, outStream, isStreamOwner, level);
		}
	};
}
