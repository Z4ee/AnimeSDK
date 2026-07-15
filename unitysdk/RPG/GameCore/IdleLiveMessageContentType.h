#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveMessageContentType_TypeDefinitionIndex = 11366;

	enum class IdleLiveMessageContentType : ::System::Int32
	{
		DisplayText = 1,
		DisplayImg = 2,
		Reply = 3,
	};
}
