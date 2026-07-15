#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OwnershipStatus_TypeDefinitionIndex = 43870;

	enum class OwnershipStatus : ::System::Int32
	{
		NotOwned = 0,
		Owned = 1,
	};
}
