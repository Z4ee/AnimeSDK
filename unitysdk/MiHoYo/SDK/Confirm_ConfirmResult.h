#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Confirm_ConfirmResult_TypeDefinitionIndex = 8185;

	enum class Confirm_ConfirmResult : ::System::Int32
	{
		Ok = 0,
		Cancel = 1,
	};
}
