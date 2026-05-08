#pragma once
#include "unitysdk/unitysdk.h"

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogPropertyTypeEnum_TypeDefinitionIndex = 32403;

	enum class LogPropertyTypeEnum : ::System::Int32
	{
		Int = 0,
		Float = 1,
		Bool = 2,
		String = 3,
		ObjectRef = 4,
	};
}
