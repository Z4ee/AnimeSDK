#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::UI::OS
{
	inline static constexpr unsigned int GooglePCOAuthState_TypeDefinitionIndex = 8428;

	enum class GooglePCOAuthState : ::System::Int32
	{
		GoToGooglePlay = 0,
		CheckAndAuthorized = 1,
	};
}
