#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagQueryExpressionType_TypeDefinitionIndex = 15994;

	enum class GameplayTagQueryExpressionType : ::System::Int32
	{
		AnyExprMatch = 4,
		NoExprMatch = 6,
		Undefined = 0,
		NoTagsMatch = 3,
		AnyTagsMatch = 1,
		AllTagsMatch = 2,
		AllExprMatch = 5,
	};
}
