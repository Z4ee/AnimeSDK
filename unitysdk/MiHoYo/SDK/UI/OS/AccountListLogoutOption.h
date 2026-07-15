#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::UI::OS
{
	inline static constexpr unsigned int AccountListLogoutOption_TypeDefinitionIndex = 8399;

	enum class AccountListLogoutOption : ::System::Int32
	{
		SaveAccount = 0,
		DeleteAccount = 1,
	};
}
