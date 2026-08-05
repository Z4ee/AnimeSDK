#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ExceptionInfo_ExceptionType_TypeDefinitionIndex = 8093;

	enum class ExceptionInfo_ExceptionType : ::System::Int32
	{
		Error = 2,
		None = 0,
		Warning = 1,
	};
}
