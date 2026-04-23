#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int ConstructorHandling_TypeDefinitionIndex = 8326;

	enum class ConstructorHandling : ::System::Int32
	{
		Default = 0,
		AllowNonPublicDefaultConstructor = 1,
	};
}
