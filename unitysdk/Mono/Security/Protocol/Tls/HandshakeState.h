#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int HandshakeState_TypeDefinitionIndex = 2358;

	enum class HandshakeState : ::System::Int32
	{
		None = 0,
		Started = 1,
		Finished = 2,
	};
}
