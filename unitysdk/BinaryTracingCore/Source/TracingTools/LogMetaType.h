#pragma once
#include "unitysdk/unitysdk.h"

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogMetaType_TypeDefinitionIndex = 32404;

	enum class LogMetaType : ::System::Int32
	{
		ArcheType = 0,
		Scope = 1,
		Channel = 2,
	};
}
