#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager_TextmapSizeErrorCode_TypeDefinitionIndex = 58509;

	enum class TextmapDownloadManager_TextmapSizeErrorCode : ::System::Int32
	{
		OK = 0,
		Downloading = 1,
		FetchingSize = 2,
		Fail = 3,
		DataUpdated = 4,
	};
}
