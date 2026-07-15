#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int OAuthType_TypeDefinitionIndex = 8374;

	enum class OAuthType : ::System::Int32
	{
		Apple = 0,
		Google = 1,
		Facebook = 3,
		Twitter = 4,
	};
}
