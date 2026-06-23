#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOperator_TypeDefinitionIndex = 15063;

	enum class EOperator : ::System::Int16
	{
		Leave = 2,
		Log = 1,
		Enter = 0,
	};
}
