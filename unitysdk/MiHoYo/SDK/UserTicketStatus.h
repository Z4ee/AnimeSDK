#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UserTicketStatus_TypeDefinitionIndex = 7519;

	enum class UserTicketStatus : ::System::Int32
	{
		STATUS_NEW = 0,
		STATUS_BIRTHDAY_REQUIRED = 1,
		STATUS_BIRTHDAY_ALLOWED = 2,
		STATUS_PARENTS_REQUIRED = 3,
		STATUS_PARENT_PENDING = 4,
		STATUS_LOGIN_FAILED = 5,
		STATUS_REGISTER_NOT_ALLOWED = 10,
		STATUS_REGISTER_WITH_EMAIL = 11,
	};
}
