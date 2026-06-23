#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagQueryExpressionType_TypeDefinitionIndex = 8948;

	enum class GameplayTagQueryExpressionType : ::System::Int32
	{
		AnyTagsMatch = 1,
		Undefined = 0,
		AnyExprMatch = 4,
		AllExprMatch = 5,
		AllTagsMatch = 2,
		NoExprMatch = 6,
		NoTagsMatch = 3,
	};
}
