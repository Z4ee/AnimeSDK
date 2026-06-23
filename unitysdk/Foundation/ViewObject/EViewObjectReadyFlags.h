#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectReadyFlags_TypeDefinitionIndex = 84021;

	enum class EViewObjectReadyFlags : ::System::Int32
	{
		None = 0,
		GraphLoadFinish = 2,
		EntityLoadFinish = 1,
	};
}
