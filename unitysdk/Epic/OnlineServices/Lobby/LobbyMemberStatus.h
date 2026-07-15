#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyMemberStatus_TypeDefinitionIndex = 43562;

	enum class LobbyMemberStatus : ::System::Int32
	{
		Joined = 0,
		Left = 1,
		Disconnected = 2,
		Kicked = 3,
		Promoted = 4,
		Closed = 5,
	};
}
