#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GoogleOAuthServer_AuthStatus_TypeDefinitionIndex = 8983;

	enum class GoogleOAuthServer_AuthStatus : ::System::Int32
	{
		AuthHttpServerError = -1,
		AuthUserNoAction = 0,
		AuthError = 1,
		AuthMalformed = 2,
		AuthPermissionMiss = 3,
		AuthFinish = 4,
	};
}
