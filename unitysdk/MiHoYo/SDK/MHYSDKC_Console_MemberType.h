#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_MemberType_TypeDefinitionIndex = 44428;

	enum class MHYSDKC_Console_MemberType : ::System::Int32
	{
		Player = 0,
		Spectator = 1,
	};
}
