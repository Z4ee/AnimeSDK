#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OAuthType_TypeDefinitionIndex = 19846;

	enum class OAuthType : ::System::Int32
	{
		Apple = 0,
		Google = 1,
		Facebook = 2,
		Twitter = 3,
	};
}
