#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionWaypointInfoType_TypeDefinitionIndex = 61891;

	enum class MissionWaypointInfoType : ::System::Int32
	{
		Default = 0,
		Assist = 1,
	};
}
