#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int ComparisonOp_TypeDefinitionIndex = 42744;

	enum class ComparisonOp : ::System::Int32
	{
		Equal = 0,
		Notequal = 1,
		Greaterthan = 2,
		Greaterthanorequal = 3,
		Lessthan = 4,
		Lessthanorequal = 5,
		Distance = 6,
		Anyof = 7,
		Notanyof = 8,
		Oneof = 9,
		Notoneof = 10,
		Contains = 11,
	};
}
