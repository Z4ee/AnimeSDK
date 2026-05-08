#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ExceptionInfo_ExceptionType_TypeDefinitionIndex = 8052;

	enum class ExceptionInfo_ExceptionType : ::System::Int32
	{
		Warning = 1,
		None = 0,
		Error = 2,
	};
}
