#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagQueryExpressionType_TypeDefinitionIndex = 8955;

	enum class GameplayTagQueryExpressionType : ::System::Int32
	{
		AllExprMatch = 5,
		AnyExprMatch = 4,
		NoExprMatch = 6,
		NoTagsMatch = 3,
		Undefined = 0,
		AnyTagsMatch = 1,
		AllTagsMatch = 2,
	};
}
