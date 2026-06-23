#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreCollectRowWidgetController_CollectStatus_TypeDefinitionIndex = 68382;

	enum class UIRoarinStoreCollectRowWidgetController_CollectStatus : ::System::Int32
	{
		Locked = 2,
		Sufficient = 16,
		None = 0,
		Unsufficient = 8,
		Claimed = 4,
	};
}
