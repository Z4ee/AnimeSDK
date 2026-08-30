#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int PreserveReferencesHandling_TypeDefinitionIndex = 9538;

	enum class PreserveReferencesHandling : ::System::Int32
	{
		None = 0,
		Objects = 1,
		Arrays = 2,
		All = 3,
	};
}
