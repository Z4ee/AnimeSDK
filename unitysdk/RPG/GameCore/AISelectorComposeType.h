#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISelectorComposeType_TypeDefinitionIndex = 15405;

	enum class AISelectorComposeType : ::System::Int32
	{
		ByAnd = 0,
		ByOr = 1,
	};
}
