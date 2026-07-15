#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonContainerType_TypeDefinitionIndex = 9253;

	enum class JsonContainerType : ::System::Int32
	{
		None = 0,
		Object = 1,
		Array = 2,
		Constructor = 3,
	};
}
