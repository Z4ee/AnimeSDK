#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int FriendsStatus_TypeDefinitionIndex = 43767;

	enum class FriendsStatus : ::System::Int32
	{
		NotFriends = 0,
		InviteSent = 1,
		InviteReceived = 2,
		Friends = 3,
	};
}
