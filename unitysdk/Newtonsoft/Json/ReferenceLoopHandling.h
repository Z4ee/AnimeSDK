#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int ReferenceLoopHandling_TypeDefinitionIndex = 7024;

	enum class ReferenceLoopHandling : ::System::Int32
	{
		Error = 0,
		Ignore = 1,
		Serialize = 2,
	};
}
