#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager_TextmapDownloadState_TypeDefinitionIndex = 61337;

	enum class TextmapDownloadManager_TextmapDownloadState : ::System::Int32
	{
		Idle = 0,
		Downloading = 1,
	};
}
