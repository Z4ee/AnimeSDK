#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceFileType_TypeDefinitionIndex = 7817;

	enum class ResourceFileType : ::System::Int32
	{
		None = 0,
		Audio = 4,
		Silence = 2,
		Res = 1,
		Data = 3,
	};
}
