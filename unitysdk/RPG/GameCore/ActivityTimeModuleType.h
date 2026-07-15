#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTimeModuleType_TypeDefinitionIndex = 10807;

	enum class ActivityTimeModuleType : ::System::Int32
	{
		Normal = 0,
		Reuse = 1,
		Forever = 2,
	};
}
