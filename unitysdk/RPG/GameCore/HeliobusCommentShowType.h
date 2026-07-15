#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusCommentShowType_TypeDefinitionIndex = 13237;

	enum class HeliobusCommentShowType : ::System::Int32
	{
		Unknown = 0,
		Day = 1,
		Mission = 2,
		Comment = 3,
	};
}
