#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsForumOperationType_TypeDefinitionIndex = 9975;

	enum class LimaoNewsForumOperationType : ::System::Int32
	{
		Unknow = 0,
		MoveToPost = 1,
		AddPost = 2,
		ChangeState = 3,
	};
}
