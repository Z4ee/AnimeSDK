#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiVerSuffix_TypeDefinitionIndex = 7851;

	enum class MultiVerSuffix : ::System::Int32
	{
		RepeatBasePath = 4,
		ErrorMultiVerPath = 3,
		Unknown = 1,
		ErrorBasePath = 2,
		Correct = 0,
	};
}
