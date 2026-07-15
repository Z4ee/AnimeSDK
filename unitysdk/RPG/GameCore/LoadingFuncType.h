#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingFuncType_TypeDefinitionIndex = 13461;

	enum class LoadingFuncType : ::System::Int32
	{
		None = 0,
		WorldTele = 1,
		StoryLine = 2,
	};
}
