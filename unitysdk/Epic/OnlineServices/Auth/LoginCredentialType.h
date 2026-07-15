#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LoginCredentialType_TypeDefinitionIndex = 44042;

	enum class LoginCredentialType : ::System::Int32
	{
		Password = 0,
		ExchangeCode = 1,
		PersistentAuth = 2,
		DeviceCode = 3,
		Developer = 4,
		RefreshToken = 5,
		AccountPortal = 6,
		ExternalAuth = 7,
	};
}
