#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SDFTextType_TypeDefinitionIndex = 67552;

	enum class SDFTextType : ::System::Int32
	{
		Dense = 0,
		Tall = 1,
		EnglishLike = 2,
	};
}
