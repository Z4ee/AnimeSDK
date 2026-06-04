#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EAirshipDriveType_TypeDefinitionIndex = 55882;

	enum class EAirshipDriveType : ::System::Int32
	{
		None = 0,
		Acceleration = 1,
		Deceleration = 2,
	};
}
