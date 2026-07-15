#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ParserTimeZone_TypeDefinitionIndex = 9292;

	enum class ParserTimeZone : ::System::Int32
	{
		Unspecified = 0,
		Utc = 1,
		LocalWestOfUtc = 2,
		LocalEastOfUtc = 3,
	};
}
