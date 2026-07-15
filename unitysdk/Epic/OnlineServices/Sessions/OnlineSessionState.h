#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnlineSessionState_TypeDefinitionIndex = 42970;

	enum class OnlineSessionState : ::System::Int32
	{
		NoSession = 0,
		Creating = 1,
		Pending = 2,
		Starting = 3,
		InProgress = 4,
		Ending = 5,
		Ended = 6,
		Destroying = 7,
	};
}
