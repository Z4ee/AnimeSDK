#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509ChainStatusFlags.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }

#define MONO_SECURITY_X509_X509CHAIN_BUILD_OFFSET UNITYSDK_OFFSET(0x1C279160)
#define MONO_SECURITY_X509_X509CHAIN_FINDBYISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1C278F20)
#define MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEPARENT_OFFSET UNITYSDK_OFFSET(0x1C279780)
#define MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEROOT_OFFSET UNITYSDK_OFFSET(0x1C2799C0)
#define MONO_SECURITY_X509_X509CHAIN_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0x1C278D90)
#define MONO_SECURITY_X509_X509CHAIN_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1C278DA0)
#define MONO_SECURITY_X509_X509CHAIN_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C278DB0)
#define MONO_SECURITY_X509_X509CHAIN_GET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1C278DC0)
#define MONO_SECURITY_X509_X509CHAIN_ISPARENT_OFFSET UNITYSDK_OFFSET(0x1C279D50)
#define MONO_SECURITY_X509_X509CHAIN_ISTRUSTED_OFFSET UNITYSDK_OFFSET(0x1C279F90)
#define MONO_SECURITY_X509_X509CHAIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C279E90)
#define MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C278F00)
#define MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C278EE0)
#define MONO_SECURITY_X509_X509CHAIN_RESET_OFFSET UNITYSDK_OFFSET(0x1C279F40)
#define MONO_SECURITY_X509_X509CHAIN_SET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1C278ED0)
#define MONO_SECURITY_X509_X509CHAIN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C278BC0)
#define MONO_SECURITY_X509_X509CHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C278AF0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Chain_TypeDefinitionIndex = 2301;

	class X509Chain : public ::System::Object
	{
	public:
		::Mono::Security::X509::X509CertificateCollection* roots; // 0x10
		::Mono::Security::X509::X509Certificate* _root; // 0x18
		::Mono::Security::X509::X509CertificateCollection* certs; // 0x20
		::Mono::Security::X509::X509CertificateCollection* _chain; // 0x28
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
