#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_ExclusiveLeaderPrivilege_TypeDefinitionIndex = 44429;

	enum class MHYSDKC_Console_ExclusiveLeaderPrivilege : ::System::Int32
	{
		Kick = 1,
		UpdateJoinableUserType = 2,
		UpdateInvitableUserType = 4,
		PromoteToLeader = 8,
	};
}
