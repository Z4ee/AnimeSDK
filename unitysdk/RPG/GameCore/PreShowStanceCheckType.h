#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreShowStanceCheckType_TypeDefinitionIndex = 23882;

	enum class PreShowStanceCheckType : ::System::Int32
	{
		Default = 0,
		NormalOrRed = 1,
		Normal = 2,
		Red = 3,
		NormalAndRed = 4,
	};
}
