#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ParseResult_TypeDefinitionIndex = 9319;

	enum class ParseResult : ::System::Int32
	{
		None = 0,
		Success = 1,
		Overflow = 2,
		Invalid = 3,
	};
}
