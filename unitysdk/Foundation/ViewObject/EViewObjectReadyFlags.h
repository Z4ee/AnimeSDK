#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectReadyFlags_TypeDefinitionIndex = 80544;

	enum class EViewObjectReadyFlags : ::System::Int32
	{
		None = 0,
		EntityLoadFinish = 1,
		GraphLoadFinish = 2,
	};
}
