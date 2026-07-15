#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostType_TypeDefinitionIndex = 13236;

	enum class HeliobusPostType : ::System::Int32
	{
		Unknown = 0,
		MissionMain = 1,
		MissionSide = 2,
		MissionEvent = 3,
		Tattle = 4,
		MyPost = 6,
		MissionAnchor = 7,
	};
}
