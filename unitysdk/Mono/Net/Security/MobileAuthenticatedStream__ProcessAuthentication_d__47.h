#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Net::Security { class AsyncProtocolResult; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__PROCESSAUTHENTICATION_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x951960)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__PROCESSAUTHENTICATION_D__47_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x646640)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream__ProcessAuthentication_d__47_TypeDefinitionIndex = 2623;

	struct alignas(8) MobileAuthenticatedStream__ProcessAuthentication_d__47
	{
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x10
		::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate; // 0x18
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x28
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1; // 0x40
		::System::String* targetHost; // 0x50
		::System::Boolean clientCertRequired; // 0x58
		::System::Boolean runSynchronously; // 0x59
		::System::Boolean serverMode; // 0x5A
		::System::Security::Authentication::SslProtocols enabledProtocols; // 0x5C
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__PROCESSAUTHENTICATION_D__47_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__PROCESSAUTHENTICATION_D__47_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
