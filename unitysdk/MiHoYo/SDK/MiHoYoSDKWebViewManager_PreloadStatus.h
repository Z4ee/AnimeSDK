#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager_PreloadStatus_TypeDefinitionIndex = 44842;

	enum class MiHoYoSDKWebViewManager_PreloadStatus : ::System::Int32
	{
		PreloadNone = 0,
		PreloadBaseStart = 1,
		PreloadBaseFinish = 2,
		PreloadFinish = 3,
	};
}
