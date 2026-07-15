#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncOperationStatus_TypeDefinitionIndex = 2417;

	enum class AsyncOperationStatus : ::System::Int32
	{
		Initialize = 0,
		Continue = 1,
		ReadDone = 2,
		Complete = 3,
	};
}
