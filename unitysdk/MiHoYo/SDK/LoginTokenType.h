#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoginTokenType_TypeDefinitionIndex = 7129;

	enum class LoginTokenType : ::System::Int32
	{
		TOKEN = 0,
		TOKEN_V2 = 1,
	};
}
