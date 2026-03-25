#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncOperationStatus.h"
#include "unitysdk/Mono/Net/Security/AsyncReadOrWriteRequest.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define MONO_NET_SECURITY_ASYNCWRITEREQUEST_RUN_OFFSET UNITYSDK_OFFSET(0x1865FC60)
#define MONO_NET_SECURITY_ASYNCWRITEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1865FBF0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncWriteRequest_TypeDefinitionIndex = 2421;

	class AsyncWriteRequest : public ::Mono::Net::Security::AsyncReadOrWriteRequest
	{
	public:
		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::System::Boolean sync, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCWRITEREQUEST__CTOR_OFFSET))(this, parent, sync, buffer, offset, size);
		}

		::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status)
		{
			return ((::Mono::Net::Security::AsyncOperationStatus(*)(::PVOID, ::Mono::Net::Security::AsyncOperationStatus))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCWRITEREQUEST_RUN_OFFSET))(this, status);
		}
	};
}
