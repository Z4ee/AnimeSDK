#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPErrorCode_TypeDefinitionIndex = 44402;

	enum class KCPErrorCode : ::System::Int32
	{
		ERR_Success = 0,
		ERR_KcpCantConnect = 102001,
		ERR_KcpChannelTimeout = 102002,
		ERR_KcpRemoteDisconnect = 102003,
		ERR_PeerDisconnect = 102004,
		ERR_SocketCantSend = 102005,
		ERR_SocketError = 102006,
		ERR_KcpWaitSendSizeTooLarge = 102007,
		ERR_KcpPeeksizeGreaterThanBuffer = 102008,
		ERR_KcpRecvMsgFailed = 102009,
		ERR_KcpReconnectFailed = 102010,
	};
}
