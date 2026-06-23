#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceFileType_TypeDefinitionIndex = 8102;

	enum class ResourceFileType : ::System::Int32
	{
		Audio = 4,
		Res = 1,
		Silence = 2,
		Data = 3,
		None = 0,
	};
}
