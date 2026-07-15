#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int NullValueHandling_TypeDefinitionIndex = 9285;

	enum class NullValueHandling : ::System::Int32
	{
		Include = 0,
		Ignore = 1,
	};
}
