#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int REAL_NAME_DIALOG_TYPE_TypeDefinitionIndex = 8048;

	enum class REAL_NAME_DIALOG_TYPE : ::System::Int32
	{
		REGISTER = 0,
		BIND = 1,
		BUY = 2,
	};
}
