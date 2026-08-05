#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceFileType_TypeDefinitionIndex = 7881;

	enum class ResourceFileType : ::System::Int32
	{
		Data = 3,
		Res = 1,
		None = 0,
		Silence = 2,
		Audio = 4,
	};
}
