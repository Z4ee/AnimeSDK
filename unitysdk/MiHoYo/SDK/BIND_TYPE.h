#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BIND_TYPE_TypeDefinitionIndex = 8049;

	enum class BIND_TYPE : ::System::Int32
	{
		NORMAL = 0,
		PAY = 1,
		TAPTAP = 2,
	};
}
