#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Info_WebViewAnimationOptions_TypeDefinitionIndex = 46593;

	enum class MHYSDKC_Info_WebViewAnimationOptions : ::System::Int32
	{
		None = 0,
		FadeInOut = 1,
		Loading = 2,
		All = 3,
	};
}
