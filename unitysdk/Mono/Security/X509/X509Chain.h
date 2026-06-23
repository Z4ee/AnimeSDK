#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509ChainStatusFlags.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }

#define MONO_SECURITY_X509_X509CHAIN_BUILD_OFFSET UNITYSDK_OFFSET(0x1E5CFEA0)
#define MONO_SECURITY_X509_X509CHAIN_FINDBYISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1E5CFC60)
#define MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEPARENT_OFFSET UNITYSDK_OFFSET(0x1E5D04C0)
#define MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEROOT_OFFSET UNITYSDK_OFFSET(0x1E5D0700)
#define MONO_SECURITY_X509_X509CHAIN_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0x1E5CFAD0)
#define MONO_SECURITY_X509_X509CHAIN_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1E5CFAE0)
#define MONO_SECURITY_X509_X509CHAIN_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1E5CFAF0)
#define MONO_SECURITY_X509_X509CHAIN_GET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1E5CFB00)
#define MONO_SECURITY_X509_X509CHAIN_ISPARENT_OFFSET UNITYSDK_OFFSET(0x1E5D0A90)
#define MONO_SECURITY_X509_X509CHAIN_ISTRUSTED_OFFSET UNITYSDK_OFFSET(0x1E5D0CD0)
#define MONO_SECURITY_X509_X509CHAIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E5D0BD0)
#define MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1E5CFC40)
#define MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E5CFC20)
#define MONO_SECURITY_X509_X509CHAIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E5D0C80)
#define MONO_SECURITY_X509_X509CHAIN_SET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1E5CFC10)
#define MONO_SECURITY_X509_X509CHAIN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5CF900)
#define MONO_SECURITY_X509_X509CHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF830)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Chain_TypeDefinitionIndex = 2300;

	class X509Chain : public ::System::Object
	{
	public:
		::Mono::Security::X509::X509CertificateCollection* _chain; // 0x10
		::Mono::Security::X509::X509Certificate* _root; // 0x18
		::Mono::Security::X509::X509CertificateCollection* roots; // 0x20
		::Mono::Security::X509::X509CertificateCollection* certs; // 0x28
		::Mono::Security::X509::X509ChainStatusFlags _status; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::X509::X509CertificateCollection* chain)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN__CTOR_1_OFFSET))(this, chain);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Chain()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_CHAIN_OFFSET))(this);
		}

		::Mono::Security::X509::X509Certificate* get_Root()
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_ROOT_OFFSET))(this);
		}

		::Mono::Security::X509::X509ChainStatusFlags get_Status()
		{
			return ((::Mono::Security::X509::X509ChainStatusFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_STATUS_OFFSET))(this);
		}

		::Mono::Security::X509::X509CertificateCollection* get_TrustAnchors()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_TRUSTANCHORS_OFFSET))(this);
		}

		::System::Void set_TrustAnchors(::Mono::Security::X509::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_SET_TRUSTANCHORS_OFFSET))(this, value);
		}

		::System::Void LoadCertificate(::Mono::Security::X509::X509Certificate* x509)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATE_OFFSET))(this, x509);
		}

		::System::Void LoadCertificates(::Mono::Security::X509::X509CertificateCollection* collection)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATES_OFFSET))(this, collection);
		}

		::Mono::Security::X509::X509Certificate* FindByIssuerName(::System::String* issuerName)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_FINDBYISSUERNAME_OFFSET))(this, issuerName);
		}

		::System::Boolean Build(::Mono::Security::X509::X509Certificate* leaf)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_BUILD_OFFSET))(this, leaf);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_RESET_OFFSET))(this);
		}

		::System::Boolean IsValid(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISVALID_OFFSET))(this, cert);
		}

		::Mono::Security::X509::X509Certificate* FindCertificateParent(::Mono::Security::X509::X509Certificate* child)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEPARENT_OFFSET))(this, child);
		}

		::Mono::Security::X509::X509Certificate* FindCertificateRoot(::Mono::Security::X509::X509Certificate* potentialRoot)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEROOT_OFFSET))(this, potentialRoot);
		}

		::System::Boolean IsTrusted(::Mono::Security::X509::X509Certificate* potentialTrusted)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISTRUSTED_OFFSET))(this, potentialTrusted);
		}

		::System::Boolean IsParent(::Mono::Security::X509::X509Certificate* child, ::Mono::Security::X509::X509Certificate* parent)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISPARENT_OFFSET))(this, child, parent);
		}
	};
}
