#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager_WebPageResult_TypeDefinitionIndex = 8289;

	enum class WebPageManager_WebPageResult : ::System::Int32
	{
		OK = 0,
		UserClosePage = 1,
	};
}
