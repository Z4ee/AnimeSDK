#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GrantType_TypeDefinitionIndex = 8037;

	enum class GrantType : ::System::Int32
	{
		Way_BindMobile = 0,
		Way_SafeMobile = 1,
		Way_Email = 2,
	};
}
