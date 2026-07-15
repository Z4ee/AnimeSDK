#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_InvitableUserType_TypeDefinitionIndex = 44427;

	enum class MHYSDKC_Console_InvitableUserType : ::System::Int32
	{
		NotSet = 0,
		NoOne = 1,
		Leader = 2,
		Member = 3,
	};
}
