#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AuthTokenType_TypeDefinitionIndex = 44022;

	enum class AuthTokenType : ::System::Int32
	{
		Client = 0,
		User = 1,
	};
}
