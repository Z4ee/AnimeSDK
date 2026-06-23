#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ExceptionInfo_ExceptionType_TypeDefinitionIndex = 7884;

	enum class ExceptionInfo_ExceptionType : ::System::Int32
	{
		Warning = 1,
		Error = 2,
		None = 0,
	};
}
