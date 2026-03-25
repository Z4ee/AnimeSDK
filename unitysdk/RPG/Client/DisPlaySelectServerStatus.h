#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DisPlaySelectServerStatus_TypeDefinitionIndex = 56712;

	enum class DisPlaySelectServerStatus : ::System::Int32
	{
		Normal = 0,
		WaitForPing = 1,
		Fail = 2,
	};
}
