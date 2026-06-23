#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipEntryFactory_TimeSetting_TypeDefinitionIndex = 6851;

	enum class ZipEntryFactory_TimeSetting : ::System::Int32
	{
		LastWriteTime = 0,
		LastWriteTimeUtc = 1,
		CreateTime = 2,
		CreateTimeUtc = 3,
		LastAccessTime = 4,
		LastAccessTimeUtc = 5,
		Fixed = 6,
	};
}
