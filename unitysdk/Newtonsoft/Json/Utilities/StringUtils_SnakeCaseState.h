#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringUtils_SnakeCaseState_TypeDefinitionIndex = 7087;

	enum class StringUtils_SnakeCaseState : ::System::Int32
	{
		Start = 0,
		Lower = 1,
		Upper = 2,
		NewWord = 3,
	};
}
