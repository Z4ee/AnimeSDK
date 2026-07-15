#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UserAgreementResult_TypeDefinitionIndex = 8062;

	enum class UserAgreementResult : ::System::Int32
	{
		Agree = 0,
		Refuse = -1,
		UnShow = 1,
	};
}
