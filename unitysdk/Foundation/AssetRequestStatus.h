#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestStatus_TypeDefinitionIndex = 8062;

	enum class AssetRequestStatus : ::System::Int32
	{
		None = 0,
		Loading = 1,
		Succeeded = 2,
		Failed = 3,
		Unload = 4,
	};
}
