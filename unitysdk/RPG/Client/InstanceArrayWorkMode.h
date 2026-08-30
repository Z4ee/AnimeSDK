#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int InstanceArrayWorkMode_TypeDefinitionIndex = 70816;

	enum class InstanceArrayWorkMode : ::System::Int32
	{
		InstanceArrayRendering = 0,
		BakeDataContainer = 1,
	};
}
