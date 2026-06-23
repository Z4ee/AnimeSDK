#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CNOrderStatus_TypeDefinitionIndex = 19869;

	enum class CNOrderStatus : ::System::Int32
	{
		CheckStatusNone = -1,
		CheckStatusInit = 0,
		CheckStatusSuccess = 1,
	};
}
