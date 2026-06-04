#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StyleGenerateType_TypeDefinitionIndex = 23563;

	enum class StyleGenerateType : ::System::Int32
	{
		None = 0,
		MatchBirdStyle = 1,
		NoMatchBirdStyle = 2,
		AnyMovable = 3,
	};
}
