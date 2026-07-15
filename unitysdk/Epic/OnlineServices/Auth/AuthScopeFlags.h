#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AuthScopeFlags_TypeDefinitionIndex = 44021;

	enum class AuthScopeFlags : ::System::Int32
	{
		NoFlags = 0,
		BasicProfile = 1,
		FriendsList = 2,
		Presence = 4,
		FriendsManagement = 8,
		Email = 16,
	};
}
