#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncOperationStatus.h"
#include "unitysdk/Mono/Net/Security/AsyncProtocolRequest.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define MONO_NET_SECURITY_ASYNCSHUTDOWNREQUEST_RUN_OFFSET UNITYSDK_OFFSET(0x1D222640)
#define MONO_NET_SECURITY_ASYNCSHUTDOWNREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D222610)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncShutdownRequest_TypeDefinitionIndex = 2617;

	class AsyncShutdownRequest : public ::Mono::Net::Security::AsyncProtocolRequest
	{
	public:
		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCSHUTDOWNREQUEST__CTOR_OFFSET))(this, parent);
		}

		::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status)
		{
			return ((::Mono::Net::Security::AsyncOperationStatus(*)(::PVOID, ::Mono::Net::Security::AsyncOperationStatus))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCSHUTDOWNREQUEST_RUN_OFFSET))(this, status);
		}
	};
}
