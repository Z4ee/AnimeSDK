#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AccountLoginMode_TypeDefinitionIndex = 61179;

	enum class AccountLoginMode : ::System::Int32
	{
		eSDK = 0,
		eAccountId = 1,
	};
}
