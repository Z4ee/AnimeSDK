#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaModuleType_TypeDefinitionIndex = 13242;

	enum class GachaModuleType : ::System::Int32
	{
		Unknown = 0,
		Star3 = 3,
		Star4 = 4,
		Star5 = 5,
	};
}
