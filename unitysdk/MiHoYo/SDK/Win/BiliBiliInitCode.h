#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliInitCode_TypeDefinitionIndex = 21064;

	enum class BiliBiliInitCode : ::System::Int32
	{
		Success = 0,
		Fail = -1,
		Reject = -2,
		Inited = 1,
		NeedShowCursor = 100,
	};
}
