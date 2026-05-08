#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestStatus_TypeDefinitionIndex = 8262;

	enum class AssetRequestStatus : ::System::Int32
	{
		Failed = 3,
		None = 0,
		Unload = 4,
		Succeeded = 2,
		Loading = 1,
	};
}
