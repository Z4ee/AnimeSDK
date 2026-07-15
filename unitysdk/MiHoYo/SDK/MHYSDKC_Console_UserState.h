#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_UserState_TypeDefinitionIndex = 44419;

	enum class MHYSDKC_Console_UserState : ::System::Int32
	{
		Unknown = 0,
		Online = 1,
		Away = 2,
		Offline = 3,
	};
}
