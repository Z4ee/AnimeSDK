#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiVerSuffix_TypeDefinitionIndex = 8038;

	enum class MultiVerSuffix : ::System::Int32
	{
		Correct = 0,
		RepeatBasePath = 4,
		ErrorBasePath = 2,
		Unknown = 1,
		ErrorMultiVerPath = 3,
	};
}
