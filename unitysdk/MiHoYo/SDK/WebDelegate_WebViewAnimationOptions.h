#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_WebViewAnimationOptions_TypeDefinitionIndex = 7765;

	enum class WebDelegate_WebViewAnimationOptions : ::System::Int32
	{
		None = 0,
		FadeInOut = 1,
		Loading = 2,
		All = 3,
	};
}
