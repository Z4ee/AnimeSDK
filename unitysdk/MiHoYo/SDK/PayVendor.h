#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PayVendor_TypeDefinitionIndex = 8052;

	enum class PayVendor : ::System::Int32
	{
		VISA = 0,
		ECMC = 1,
		AMEX = 2,
		JCB = 3,
		PAYPAL = 4,
	};
}
