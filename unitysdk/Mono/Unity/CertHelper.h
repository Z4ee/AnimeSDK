#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x18669750)
#define MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x18669990)
#define MONO_UNITY_CERTHELPER_NATIVECHAINTOMANAGEDCOLLECTION_OFFSET UNITYSDK_OFFSET(0x18669FA0)

namespace Mono::Unity
{
	inline static constexpr unsigned int CertHelper_TypeDefinitionIndex = 2335;

	class CertHelper : public ::System::Object
	{
	public:
		static ::System::Void AddCertificatesToNativeChain(::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Void(*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET))(nativeCertificateChain, certificates, errorState);
		}

		static ::System::Void AddCertificateToNativeChain(::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Void(*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET))(nativeCertificateChain, certificate, errorState);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* NativeChainToManagedCollection(::Mono::Unity::UnityTls_unitytls_x509list_ref nativeCertificateChain, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_NATIVECHAINTOMANAGEDCOLLECTION_OFFSET))(nativeCertificateChain, errorState);
		}
	};
}
