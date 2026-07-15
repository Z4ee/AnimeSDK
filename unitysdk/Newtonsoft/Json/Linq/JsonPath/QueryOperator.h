#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int QueryOperator_TypeDefinitionIndex = 9468;

	enum class QueryOperator : ::System::Int32
	{
		None = 0,
		Equals = 1,
		NotEquals = 2,
		Exists = 3,
		LessThan = 4,
		LessThanOrEquals = 5,
		GreaterThan = 6,
		GreaterThanOrEquals = 7,
		And = 8,
		Or = 9,
	};
}
