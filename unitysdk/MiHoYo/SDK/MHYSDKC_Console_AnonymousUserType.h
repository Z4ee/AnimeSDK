#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_AnonymousUserType_TypeDefinitionIndex = 44421;

	enum class MHYSDKC_Console_AnonymousUserType : ::System::Int32
	{
		Unknown = 0,
		CrossNetworkUser = 1,
		CrossNetworkFriend = 2,
	};
}
