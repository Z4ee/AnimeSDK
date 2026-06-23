#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslClientStream_NegotiateState_TypeDefinitionIndex = 2378;

	enum class SslClientStream_NegotiateState : ::System::Int32
	{
		SentClientHello = 0,
		ReceiveClientHelloResponse = 1,
		SentCipherSpec = 2,
		ReceiveCipherSpecResponse = 3,
		SentKeyExchange = 4,
		ReceiveFinishResponse = 5,
		SentFinished = 6,
	};
}
