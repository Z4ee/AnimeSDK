#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int UpdateTiming_TypeDefinitionIndex = 42264;

	enum class UpdateTiming : ::System::Int32
	{
		ManualUpdate = 0,
		InUpdate = 1,
		InFixedUpdate = 2,
	};
}
