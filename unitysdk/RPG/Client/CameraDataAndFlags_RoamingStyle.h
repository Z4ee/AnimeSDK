#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_RoamingStyle_TypeDefinitionIndex = 66419;

	enum class CameraDataAndFlags_RoamingStyle : ::System::Int32
	{
		None = 0,
		ThridPerson = 1,
		FirstPerson = 2,
		ThridPersonLocked = 3,
		TrackRoaming = 4,
	};
}
