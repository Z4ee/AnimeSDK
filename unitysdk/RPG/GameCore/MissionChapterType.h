#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChapterType_TypeDefinitionIndex = 13629;

	enum class MissionChapterType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Activity = 2,
	};
}
