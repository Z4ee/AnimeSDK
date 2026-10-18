#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentTradeBlock_TradeDisplayType_TypeDefinitionIndex = 63254;

	enum class MessageContentTradeBlock_TradeDisplayType : ::System::Int32
	{
		None = 0,
		Publish = 1,
		Cancel = 2,
		Reject = 3,
		Expire = 4,
		Confirm = 5,
		Complete = 6,
	};
}
