#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncOperationStatus.h"
#include "unitysdk/Mono/Net/Security/AsyncReadOrWriteRequest.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define MONO_NET_SECURITY_ASYNCWRITEREQUEST_RUN_OFFSET UNITYSDK_OFFSET(0x1AF0B6C0)
#define MONO_NET_SECURITY_ASYNCWRITEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0B650)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncWriteRequest_TypeDefinitionIndex = 2422;

	class AsyncWriteRequest : public ::Mono::Net::Security::AsyncReadOrWriteRequest
	{
	public:
		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* a1, ::System::Boolean a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCWRITEREQUEST__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus a1)
		{
			return ((::Mono::Net::Security::AsyncOperationStatus(*)(::PVOID, ::Mono::Net::Security::AsyncOperationStatus))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCWRITEREQUEST_RUN_OFFSET))(this, a1);
		}
	};
}
