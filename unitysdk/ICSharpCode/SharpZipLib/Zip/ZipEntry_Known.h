#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipEntry_Known_TypeDefinitionIndex = 6853;

	enum class ZipEntry_Known : ::System::Byte
	{
		None = 0x0,
		Size = 0x1,
		CompressedSize = 0x2,
		Crc = 0x4,
		Time = 0x8,
		ExternalAttributes = 0x10,
	};
}
