#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int LoginMethod_TypeDefinitionIndex = 8423;

	enum class LoginMethod : ::System::Int32
	{
		Unknown = 0,
		AccountPassword = 1,
		Thirdparty = 2,
		Auto = 3,
		AccountList = 4,
		AuthTicketByHoYoPlay = 5,
		AuthTicketAfterRegister = 6,
	};
}
