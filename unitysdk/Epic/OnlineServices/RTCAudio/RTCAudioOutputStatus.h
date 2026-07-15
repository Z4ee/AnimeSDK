#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int RTCAudioOutputStatus_TypeDefinitionIndex = 43137;

	enum class RTCAudioOutputStatus : ::System::Int32
	{
		Idle = 0,
		Playing = 1,
		Failed = 2,
	};
}
