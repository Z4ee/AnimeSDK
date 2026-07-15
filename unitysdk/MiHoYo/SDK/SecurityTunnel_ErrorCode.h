#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ErrorCode_TypeDefinitionIndex = 44647;

	enum class SecurityTunnel_ErrorCode : ::System::Int32
	{
		ConnectGateFailure = 1000,
		ConnectGateFailureAll = 1001,
		ReadStream = 2000,
		ReadEmptyPacket = 2001,
		WriteStream = 2002,
		WriteCallbackTimeout = 2003,
		WriteCallbackUnsupport = 2004,
		FileTransfer = 3000,
		CryptoInit = 4000,
		AesCbcEncryption = 4001,
		AesCbcDecryption = 4002,
		RSAFail = 4003,
		RSATimeOut = 4004,
		SecretKeyExchanged = 4005,
		SecurityMessage = 5000,
		EmptyContent = 5001,
		EmptyBytes = 5002,
		LoginFail = 6000,
		LoginTimeOut = 6001,
		LogoutFail = 6002,
		LogoutTimeOut = 6003,
		PingTimeout = 6004,
		TCPDisconnectFail = 7000,
		InvalidJSON = 8000,
	};
}
