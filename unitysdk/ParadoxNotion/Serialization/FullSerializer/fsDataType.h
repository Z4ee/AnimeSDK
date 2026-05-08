#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDataType_TypeDefinitionIndex = 27524;

	enum class fsDataType : ::System::Int32
	{
		Double = 2,
		String = 5,
		Array = 0,
		Object = 1,
		Int64 = 3,
		Null = 6,
		Boolean = 4,
	};
}
