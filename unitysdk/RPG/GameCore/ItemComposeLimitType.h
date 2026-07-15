#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeLimitType_TypeDefinitionIndex = 13338;

	enum class ItemComposeLimitType : ::System::Int32
	{
		Unknown = 0,
		NotLimit = 1,
		Daily = 2,
		Weekly = 3,
		Monthly = 4,
		ModuleId = 5,
	};
}
