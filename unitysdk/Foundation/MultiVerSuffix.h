#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiVerSuffix_TypeDefinitionIndex = 8263;

	enum class MultiVerSuffix : ::System::Int32
	{
		ErrorMultiVerPath = 3,
		ErrorBasePath = 2,
		Correct = 0,
		RepeatBasePath = 4,
		Unknown = 1,
	};
}
