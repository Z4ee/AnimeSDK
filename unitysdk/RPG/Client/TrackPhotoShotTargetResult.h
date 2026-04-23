#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TrackPhotoShotTargetResult_TypeDefinitionIndex = 56185;

	enum class TrackPhotoShotTargetResult : ::System::Int32
	{
		Normal = 0,
		CandidPhotography = 1,
		Repeated = 2,
	};
}
