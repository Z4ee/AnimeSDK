#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int OrderStatus_TypeDefinitionIndex = 8054;

	enum class OrderStatus : ::System::Int32
	{
		Init = 0,
		Prepay = 1,
		Verify = 2,
		Payed = 3,
		Refund = 4,
		InTransit = 5,
		GetBack = 6,
		Finish = 900,
		Timeout = 901,
		Cancel = 902,
		Reject = 903,
	};
}
