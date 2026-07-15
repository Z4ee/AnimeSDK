#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliLoginCode_TypeDefinitionIndex = 8990;

	enum class BiliBiliLoginCode : ::System::Int32
	{
		Success = 0,
		Fail = -1,
		Cancel = -2,
		Logined = 1,
		NeedShowCursor = 100,
	};
}
