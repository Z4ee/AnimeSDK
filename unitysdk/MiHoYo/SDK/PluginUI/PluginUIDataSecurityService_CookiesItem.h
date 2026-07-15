#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIDataSecurityService_CookiesItem_TypeDefinitionIndex = 8812;

	enum class PluginUIDataSecurityService_CookiesItem : ::System::Int32
	{
		COOKIE = 0,
		TOGGLE = 1,
		DETAIL_CONTENT = 2,
		DETAIL_BUTTON = 3,
	};
}
