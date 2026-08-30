#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int ObjectCreationHandling_TypeDefinitionIndex = 9548;

	enum class ObjectCreationHandling : ::System::Int32
	{
		Auto = 0,
		Reuse = 1,
		Replace = 2,
	};
}
