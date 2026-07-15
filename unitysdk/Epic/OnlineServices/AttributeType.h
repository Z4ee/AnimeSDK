#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int AttributeType_TypeDefinitionIndex = 42741;

	enum class AttributeType : ::System::Int32
	{
		Boolean = 0,
		Int64 = 1,
		Double = 2,
		String = 3,
	};
}
