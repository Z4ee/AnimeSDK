#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int MissingMemberHandling_TypeDefinitionIndex = 8223;

	enum class MissingMemberHandling : ::System::Int32
	{
		Ignore = 0,
		Error = 1,
	};
}
