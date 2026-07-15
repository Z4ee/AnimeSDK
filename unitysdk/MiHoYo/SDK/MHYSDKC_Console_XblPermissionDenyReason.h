#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_XblPermissionDenyReason_TypeDefinitionIndex = 44425;

	enum class MHYSDKC_Console_XblPermissionDenyReason : ::System::Int32
	{
		Unknown = 0,
		NotAllowed = 2,
		MissingPrivilege = 3,
		PrivilegeRestrictsTarget = 4,
		BlockListRestrictsTarget = 5,
		MuteListRestrictsTarget = 7,
		PrivacySettingRestrictsTarget = 9,
		CrossNetworkUserMustBeFriend = 12,
	};
}
