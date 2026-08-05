#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int GraphBufferWriter_MODE_TypeDefinitionIndex = 31102;

	enum class GraphBufferWriter_MODE : ::System::Int32
	{
		SELF = 0,
		WRAP_ORGIN = 1,
	};
}
