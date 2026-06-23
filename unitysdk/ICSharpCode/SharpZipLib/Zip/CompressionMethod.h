#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int CompressionMethod_TypeDefinitionIndex = 6843;

	enum class CompressionMethod : ::System::Int32
	{
		Stored = 0,
		Deflated = 8,
		Deflate64 = 9,
		BZip2 = 11,
		WinZipAES = 99,
	};
}
