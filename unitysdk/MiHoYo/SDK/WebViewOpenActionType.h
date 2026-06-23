#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewOpenActionType_TypeDefinitionIndex = 19883;

	enum class WebViewOpenActionType : ::System::Int32
	{
		InApp = 0,
		InBrowser = 1,
	};
}
