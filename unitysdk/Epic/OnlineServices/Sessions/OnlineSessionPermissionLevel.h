#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnlineSessionPermissionLevel_TypeDefinitionIndex = 42969;

	enum class OnlineSessionPermissionLevel : ::System::Int32
	{
		PublicAdvertised = 0,
		JoinViaPresence = 1,
		InviteOnly = 2,
	};
}
