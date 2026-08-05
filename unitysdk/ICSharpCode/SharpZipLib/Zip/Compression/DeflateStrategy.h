#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int DeflateStrategy_TypeDefinitionIndex = 6831;

	enum class DeflateStrategy : ::System::Int32
	{
		Default = 0,
		Filtered = 1,
		HuffmanOnly = 2,
	};
}
