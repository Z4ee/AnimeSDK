#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenInteractLikeType_TypeDefinitionIndex = 10040;

	enum class HipplenInteractLikeType : ::System::Int32
	{
		None = 0,
		Dislike = 1,
		Normal = 2,
		Like = 3,
	};
}
