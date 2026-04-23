#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int EcomItemType_TypeDefinitionIndex = 42171;

	enum class EcomItemType : ::System::Int32
	{
		Durable = 0,
		Consumable = 1,
		Other = 2,
	};
}
