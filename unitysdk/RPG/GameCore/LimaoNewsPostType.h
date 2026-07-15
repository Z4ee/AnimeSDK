#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsPostType_TypeDefinitionIndex = 13420;

	enum class LimaoNewsPostType : ::System::Int32
	{
		None = 0,
		Picture = 1,
		Video = 2,
		Comic = 3,
	};
}
