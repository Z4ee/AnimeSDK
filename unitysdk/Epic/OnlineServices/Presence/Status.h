#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int Status_TypeDefinitionIndex = 43290;

	enum class Status : ::System::Int32
	{
		Offline = 0,
		Online = 1,
		Away = 2,
		ExtendedAway = 3,
		DoNotDisturb = 4,
	};
}
