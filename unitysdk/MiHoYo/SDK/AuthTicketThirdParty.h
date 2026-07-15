#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AuthTicketThirdParty_TypeDefinitionIndex = 8041;

	enum class AuthTicketThirdParty : ::System::Int32
	{
		NONE = 0,
		FACEBOOK = 1,
		TWITTER = 2,
		GOOGLE = 3,
		APPLE = 4,
	};
}
