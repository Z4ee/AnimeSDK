#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int UserCenterManager_UserCenterType_TypeDefinitionIndex = 8082;

	enum class UserCenterManager_UserCenterType : ::System::Int32
	{
		OLD = 1,
		NEW = 2,
	};
}
