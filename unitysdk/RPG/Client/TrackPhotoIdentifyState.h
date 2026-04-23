#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TrackPhotoIdentifyState_TypeDefinitionIndex = 56181;

	enum class TrackPhotoIdentifyState : ::System::Int32
	{
		SearchTarget = 0,
		AimTarget = 1,
		CandidPhotography = 2,
	};
}
