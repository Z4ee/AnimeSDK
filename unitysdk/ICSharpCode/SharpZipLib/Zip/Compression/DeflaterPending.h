#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/Compression/PendingBuffer.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERPENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5BDE0)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int DeflaterPending_TypeDefinitionIndex = 6836;

	class DeflaterPending : public ::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERPENDING__CTOR_OFFSET))(this);
		}
	};
}
