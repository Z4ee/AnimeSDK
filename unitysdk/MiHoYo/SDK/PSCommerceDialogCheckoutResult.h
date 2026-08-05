#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSCommerceDialogCheckoutResult_TypeDefinitionIndex = 20222;

	enum class PSCommerceDialogCheckoutResult : ::System::Int32
	{
		ErrorOccured = -1,
		Closed = 0,
		UserCanceled = 1,
		Purchased = 2,
	};
}
