#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_ValidationLevel_TypeDefinitionIndex = 90603;

	enum class MB2_ValidationLevel : ::System::Int32
	{
		none = 0,
		quick = 1,
		robust = 2,
	};
}
