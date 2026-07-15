#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int ConnectionClosedReason_TypeDefinitionIndex = 43373;

	enum class ConnectionClosedReason : ::System::Int32
	{
		Unknown = 0,
		ClosedByLocalUser = 1,
		ClosedByPeer = 2,
		TimedOut = 3,
		TooManyConnections = 4,
		InvalidMessage = 5,
		InvalidData = 6,
		ConnectionFailed = 7,
		ConnectionClosed = 8,
		NegotiationFailed = 9,
		UnexpectedError = 10,
	};
}
