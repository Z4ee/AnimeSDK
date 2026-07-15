#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int ConnectionEstablishedType_TypeDefinitionIndex = 43374;

	enum class ConnectionEstablishedType : ::System::Int32
	{
		NewConnection = 0,
		Reconnection = 1,
	};
}
