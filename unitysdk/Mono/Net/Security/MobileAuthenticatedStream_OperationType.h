#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream_OperationType_TypeDefinitionIndex = 2622;

	enum class MobileAuthenticatedStream_OperationType : ::System::Int32
	{
		Read = 0,
		Write = 1,
		Shutdown = 2,
	};
}
