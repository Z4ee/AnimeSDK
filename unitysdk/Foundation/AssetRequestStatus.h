#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestStatus_TypeDefinitionIndex = 8214;

	enum class AssetRequestStatus : ::System::Int32
	{
		Unload = 4,
		Succeeded = 2,
		None = 0,
		Loading = 1,
		Failed = 3,
	};
}
