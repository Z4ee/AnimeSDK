#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoLocalCertificateSelectionCallback; }
namespace Mono::Security::Interface { class MonoRemoteCertificateValidationCallback; }
namespace System::Net::Security { class LocalCertSelectionCallback; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C477280)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOPUBLIC_OFFSET UNITYSDK_OFFSET(0x1C4771E0)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_OFFSET UNITYSDK_OFFSET(0x1C47FD90)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers_TypeDefinitionIndex = 2448;

	class CallbackHelpers : public ::System::Object
	{
	public:
		static ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* PublicToMono(::System::Net::Security::RemoteCertificateValidationCallback* a1)
		{
			return ((::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*(*)(::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_OFFSET))(a1);
		}

		static ::System::Net::Security::RemoteCertificateValidationCallback* MonoToPublic(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* a1)
		{
			return ((::System::Net::Security::RemoteCertificateValidationCallback*(*)(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOPUBLIC_OFFSET))(a1);
		}

		static ::System::Net::Security::LocalCertSelectionCallback* MonoToInternal(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* a1)
		{
			return ((::System::Net::Security::LocalCertSelectionCallback*(*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_OFFSET))(a1);
		}
	};
}
