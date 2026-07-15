#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PayProductResult_TypeDefinitionIndex = 57308;

	enum class PayProductResult : ::System::Int32
	{
		SDK_FAILED = 0,
		SUCCEED = 1,
		NOT_LOGIN = 2,
		NOT_DATA_READY = 3,
		PRODUCT_NOT_FOUND = 4,
		PAY_NOT_OPEN = 5,
		CASHIER_PENDING = 6,
	};
}
