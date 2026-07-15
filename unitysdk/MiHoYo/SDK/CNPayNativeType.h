#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CNPayNativeType_TypeDefinitionIndex = 8057;

	enum class CNPayNativeType : ::System::Int32
	{
		Mixed = 0,
		Expand = 1,
		Fold = 2,
	};
}
