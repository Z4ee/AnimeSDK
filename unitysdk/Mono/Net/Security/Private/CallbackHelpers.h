#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoLocalCertificateSelectionCallback; }
namespace Mono::Security::Interface { class MonoRemoteCertificateValidationCallback; }
namespace System { class String; }
namespace System::Net::Security { class LocalCertSelectionCallback; }
namespace System::Net::Security { class LocalCertificateSelectionCallback; }
namespace System::Net::Security { class RemoteCertValidationCallback; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_INTERNALTOMONO_1_OFFSET UNITYSDK_OFFSET(0x1C004B00)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_INTERNALTOMONO_OFFSET UNITYSDK_OFFSET(0x1C0049E0)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_INTERNALTOPUBLIC_OFFSET UNITYSDK_OFFSET(0x1C004A70)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1C004D40)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C004CB0)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOPUBLIC_1_OFFSET UNITYSDK_OFFSET(0x1C004C20)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOPUBLIC_OFFSET UNITYSDK_OFFSET(0x1C004B90)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_1_OFFSET UNITYSDK_OFFSET(0x1C004950)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_OFFSET UNITYSDK_OFFSET(0x1C0048C0)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers_TypeDefinitionIndex = 2633;

	class CallbackHelpers : public ::System::Object
	{
	public:
		static ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* PublicToMono(::System::Net::Security::RemoteCertificateValidationCallback* callback)
		{
			return ((::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*(*)(::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_OFFSET))(callback);
		}

		static ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* PublicToMono_1(::System::Net::Security::LocalCertificateSelectionCallback* callback)
		{
			return ((::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*(*)(::System::Net::Security::LocalCertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_1_OFFSET))(callback);
		}

		static ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* InternalToMono(::System::Net::Security::RemoteCertValidationCallback* callback)
		{
			return ((::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*(*)(::System::Net::Security::RemoteCertValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_INTERNALTOMONO_OFFSET))(callback);
		}

		static ::System::Net::Security::RemoteCertificateValidationCallback* InternalToPublic(::System::String* hostname, ::System::Net::Security::RemoteCertValidationCallback* callback)
		{
			return ((::System::Net::Security::RemoteCertificateValidationCallback*(*)(::System::String*, ::System::Net::Security::RemoteCertValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_INTERNALTOPUBLIC_OFFSET))(hostname, callback);
		}

		static ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* InternalToMono_1(::System::Net::Security::LocalCertSelectionCallback* callback)
		{
			return ((::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*(*)(::System::Net::Security::LocalCertSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_INTERNALTOMONO_1_OFFSET))(callback);
		}

		static ::System::Net::Security::RemoteCertificateValidationCallback* MonoToPublic(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback)
		{
			return ((::System::Net::Security::RemoteCertificateValidationCallback*(*)(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOPUBLIC_OFFSET))(callback);
		}

		static ::System::Net::Security::LocalCertificateSelectionCallback* MonoToPublic_1(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback)
		{
			return ((::System::Net::Security::LocalCertificateSelectionCallback*(*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOPUBLIC_1_OFFSET))(callback);
		}

		static ::System::Net::Security::RemoteCertValidationCallback* MonoToInternal(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback)
		{
			return ((::System::Net::Security::RemoteCertValidationCallback*(*)(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_OFFSET))(callback);
		}

		static ::System::Net::Security::LocalCertSelectionCallback* MonoToInternal_1(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback)
		{
			return ((::System::Net::Security::LocalCertSelectionCallback*(*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_1_OFFSET))(callback);
		}
	};
}
