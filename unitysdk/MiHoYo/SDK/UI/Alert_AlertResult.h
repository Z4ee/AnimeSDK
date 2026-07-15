#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Alert_AlertResult_TypeDefinitionIndex = 8332;

	enum class Alert_AlertResult : ::System::Int32
	{
		Sure = 0,
		Close = 1,
	};
}
