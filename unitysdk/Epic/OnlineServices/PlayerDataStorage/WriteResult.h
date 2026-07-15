#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int WriteResult_TypeDefinitionIndex = 43356;

	enum class WriteResult : ::System::Int32
	{
		ContinueWriting = 1,
		CompleteRequest = 2,
		FailRequest = 3,
		CancelRequest = 4,
	};
}
