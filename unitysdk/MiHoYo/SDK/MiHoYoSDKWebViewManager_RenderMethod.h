#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager_RenderMethod_TypeDefinitionIndex = 44843;

	enum class MiHoYoSDKWebViewManager_RenderMethod : ::System::Int32
	{
		OsrLegacy = 0,
		OsrOptimize = 1,
		Isr = 2,
	};
}
