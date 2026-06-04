#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeFuncType_TypeDefinitionIndex = 13191;

	enum class ItemComposeFuncType : ::System::Int32
	{
		Unknown = 0,
		Compose = 1,
		Replace = 2,
	};
}
