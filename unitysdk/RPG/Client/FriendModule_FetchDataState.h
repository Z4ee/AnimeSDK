#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FriendModule_FetchDataState_TypeDefinitionIndex = 61332;

	enum class FriendModule_FetchDataState : ::System::Int32
	{
		None = 0,
		FirstFetch = 1,
		FinalFetch = 2,
		UIRefresh = 3,
	};
}
