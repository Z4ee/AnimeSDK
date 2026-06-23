#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncOperationStatus.h"
#include "unitysdk/Mono/Net/Security/AsyncProtocolRequest.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define MONO_NET_SECURITY_ASYNCHANDSHAKEREQUEST_RUN_OFFSET UNITYSDK_OFFSET(0x1D4501C0)
#define MONO_NET_SECURITY_ASYNCHANDSHAKEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D450190)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncHandshakeRequest_TypeDefinitionIndex = 2613;

	class AsyncHandshakeRequest : public ::Mono::Net::Security::AsyncProtocolRequest
	{
	public:
		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::System::Boolean sync)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCHANDSHAKEREQUEST__CTOR_OFFSET))(this, parent, sync);
		}

		::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status)
		{
			return ((::Mono::Net::Security::AsyncOperationStatus(*)(::PVOID, ::Mono::Net::Security::AsyncOperationStatus))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCHANDSHAKEREQUEST_RUN_OFFSET))(this, status);
		}
	};
}
