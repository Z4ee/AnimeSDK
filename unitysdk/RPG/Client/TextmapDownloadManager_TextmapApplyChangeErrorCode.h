#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager_TextmapApplyChangeErrorCode_TypeDefinitionIndex = 58508;

	enum class TextmapDownloadManager_TextmapApplyChangeErrorCode : ::System::Int32
	{
		OK = 0,
		Validating = 1,
		Cancelled = 2,
		ValidationFailed = 3,
	};
}
