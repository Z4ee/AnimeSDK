#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int ReadType_TypeDefinitionIndex = 9270;

	enum class ReadType : ::System::Int32
	{
		Read = 0,
		ReadAsInt32 = 1,
		ReadAsBytes = 2,
		ReadAsString = 3,
		ReadAsDecimal = 4,
		ReadAsDateTime = 5,
		ReadAsDateTimeOffset = 6,
		ReadAsDouble = 7,
		ReadAsBoolean = 8,
	};
}
