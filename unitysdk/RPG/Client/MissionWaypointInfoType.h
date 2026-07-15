#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionWaypointInfoType_TypeDefinitionIndex = 63256;

	enum class MissionWaypointInfoType : ::System::Int32
	{
		Default = 0,
		Assist = 1,
	};
}
