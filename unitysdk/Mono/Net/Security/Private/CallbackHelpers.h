#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoLocalCertificateSelectionCallback; }
namespace Mono::Security::Interface { class MonoRemoteCertificateValidationCallback; }
namespace System::Net::Security { class LocalCertSelectionCallback; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x186605F0)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOPUBLIC_OFFSET UNITYSDK_OFFSET(0x18660560)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_OFFSET UNITYSDK_OFFSET(0x18669370)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers_TypeDefinitionIndex = 2436;

	class CallbackHelpers : public ::System::Object
	{
	public:
		static ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* PublicToMono(::System::Net::Security::RemoteCertificateValidationCallback* callback)
		{
			return ((::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*(*)(::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_OFFSET))(callback);
		}

		static ::System::Net::Security::RemoteCertificateValidationCallback* MonoToPublic(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback)
		{
			return ((::System::Net::Security::RemoteCertificateValidationCallback*(*)(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOPUBLIC_OFFSET))(callback);
		}

		static ::System::Net::Security::LocalCertSelectionCallback* MonoToInternal(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback)
		{
			return ((::System::Net::Security::LocalCertSelectionCallback*(*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_OFFSET))(callback);
		}
	};
}
