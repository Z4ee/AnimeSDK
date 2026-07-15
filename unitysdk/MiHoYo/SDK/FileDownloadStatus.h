#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int FileDownloadStatus_TypeDefinitionIndex = 44553;

	enum class FileDownloadStatus : ::System::Int32
	{
		Pending = 2,
		Downloading = 1,
		Pause = 3,
		Success = 4,
		Failed = 5,
		Default = 0,
	};
}
