#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int ReadResult_TypeDefinitionIndex = 43349;

	enum class ReadResult : ::System::Int32
	{
		ContinueReading = 1,
		FailRequest = 2,
		CancelRequest = 3,
	};
}
