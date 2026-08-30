#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x1E904A00)
#define MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x1E904BF0)
#define MONO_UNITY_CERTHELPER_NATIVECHAINTOMANAGEDCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1E904F80)

namespace Mono::Unity
{
	inline static constexpr unsigned int CertHelper_TypeDefinitionIndex = 2347;

	class CertHelper : public ::System::Object
	{
	public:
		static ::System::Void AddCertificatesToNativeChain(::Mono::Unity::UnityTls_unitytls_x509list* a1, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3)
		{
			return ((::System::Void(*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddCertificateToNativeChain(::Mono::Unity::UnityTls_unitytls_x509list* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3)
		{
			return ((::System::Void(*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* NativeChainToManagedCollection(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::Mono::Unity::UnityTls_unitytls_errorstate* a2)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_NATIVECHAINTOMANAGEDCOLLECTION_OFFSET))(a1, a2);
		}
	};
}
