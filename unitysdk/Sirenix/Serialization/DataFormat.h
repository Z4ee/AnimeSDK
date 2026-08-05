#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DataFormat_TypeDefinitionIndex = 6542;

	enum class DataFormat : ::System::Int32
	{
		Binary = 0,
		JSON = 1,
		Nodes = 2,
	};
}
