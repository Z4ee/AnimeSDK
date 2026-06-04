#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SyncPropertyType_TypeDefinitionIndex = 65561;

	enum class SyncPropertyType : ::System::Int32
	{
		CharaWorldPos = 0,
	};
}
