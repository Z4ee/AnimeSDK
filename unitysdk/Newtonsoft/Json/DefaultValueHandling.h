#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DefaultValueHandling_TypeDefinitionIndex = 9251;

	enum class DefaultValueHandling : ::System::Int32
	{
		Include = 0,
		Ignore = 1,
		Populate = 2,
		IgnoreAndPopulate = 3,
	};
}
