#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoginPanelFunction_TypeDefinitionIndex = 58420;

	enum class LoginPanelFunction : ::System::Int32
	{
		Notice = 2,
		ResCheck = 4,
		Language = 8,
		CustomerService = 16,
		Login = 32,
		Qrcode = 64,
		DevLogin = 128,
		PSRule = 256,
		Feedback = 512,
		Logout = 1024,
		Exit = 2048,
	};
}
