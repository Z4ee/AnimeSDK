#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingSourceAttachTargetType_TypeDefinitionIndex = 73834;

	enum class StreamingSourceAttachTargetType : ::System::Int32
	{
		Entity = 0,
		Camera = 1,
		Transform = 2,
		Anchor = 3,
		Position = 4,
	};
}
