#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager_TextmapDownloadState_TypeDefinitionIndex = 57249;

	enum class TextmapDownloadManager_TextmapDownloadState : ::System::Int32
	{
		Idle = 0,
		Downloading = 1,
	};
}
