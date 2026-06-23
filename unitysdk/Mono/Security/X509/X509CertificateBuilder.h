#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509Builder.h"
#include "unitysdk/System/DateTime.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509ExtensionCollection; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }

#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1DB6C280)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1DB6C1A0)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_ISSUERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DB6C240)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_NOTAFTER_OFFSET UNITYSDK_OFFSET(0x1DB6C1E0)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_NOTBEFORE_OFFSET UNITYSDK_OFFSET(0x1DB6C1C0)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1DB6C180)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_SUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1DB6C200)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_SUBJECTPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1DB6C220)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_SUBJECTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DB6C260)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1DB6C160)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1DB6C1B0)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_ISSUERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DB6C250)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_NOTAFTER_OFFSET UNITYSDK_OFFSET(0x1DB6C1F0)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_NOTBEFORE_OFFSET UNITYSDK_OFFSET(0x1DB6C1D0)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1DB6C190)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_SUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1DB6C210)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_SUBJECTPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1DB6C230)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_SUBJECTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DB6C270)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1DB6C170)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SUBJECTPUBLICKEYINFO_OFFSET UNITYSDK_OFFSET(0x1DB6C290)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_TOBESIGNED_OFFSET UNITYSDK_OFFSET(0x1DB6CD40)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER_UNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1DB6CC90)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB6C000)
#define MONO_SECURITY_X509_X509CERTIFICATEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6BEE0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509CertificateBuilder_TypeDefinitionIndex = 2297;

	class X509CertificateBuilder : public ::Mono::Security::X509::X509Builder
	{
	public:
		::System::Security::Cryptography::AsymmetricAlgorithm* aa; // 0x18
		::Il2CppArray<::System::Byte>* sn; // 0x20
		::System::String* subject; // 0x28
		::Il2CppArray<::System::Byte>* issuerUniqueID; // 0x30
		::Il2CppArray<::System::Byte>* subjectUniqueID; // 0x38
		::System::String* issuer; // 0x40
		::Mono::Security::X509::X509ExtensionCollection* extensions; // 0x48
		::System::Byte version; // 0x50
		::System::DateTime notBefore; // 0x58
		::System::DateTime notAfter; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Byte version)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER__CTOR_1_OFFSET))(this, version);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_VERSION_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_SerialNumber()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_SERIALNUMBER_OFFSET))(this);
		}

		::System::Void set_SerialNumber(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_SERIALNUMBER_OFFSET))(this, value);
		}

		::System::String* get_IssuerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_ISSUERNAME_OFFSET))(this);
		}

		::System::Void set_IssuerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_ISSUERNAME_OFFSET))(this, value);
		}

		::System::DateTime get_NotBefore()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_NOTBEFORE_OFFSET))(this);
		}

		::System::Void set_NotBefore(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_NOTBEFORE_OFFSET))(this, value);
		}

		::System::DateTime get_NotAfter()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_NOTAFTER_OFFSET))(this);
		}

		::System::Void set_NotAfter(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_NOTAFTER_OFFSET))(this, value);
		}

		::System::String* get_SubjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_SUBJECTNAME_OFFSET))(this);
		}

		::System::Void set_SubjectName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_SUBJECTNAME_OFFSET))(this, value);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_SubjectPublicKey()
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_SUBJECTPUBLICKEY_OFFSET))(this);
		}

		::System::Void set_SubjectPublicKey(::System::Security::Cryptography::AsymmetricAlgorithm* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_SUBJECTPUBLICKEY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_IssuerUniqueId()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_ISSUERUNIQUEID_OFFSET))(this);
		}

		::System::Void set_IssuerUniqueId(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_ISSUERUNIQUEID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_SubjectUniqueId()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_SUBJECTUNIQUEID_OFFSET))(this);
		}

		::System::Void set_SubjectUniqueId(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SET_SUBJECTUNIQUEID_OFFSET))(this, value);
		}

		::Mono::Security::X509::X509ExtensionCollection* get_Extensions()
		{
			return ((::Mono::Security::X509::X509ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_GET_EXTENSIONS_OFFSET))(this);
		}

		::Mono::Security::ASN1* SubjectPublicKeyInfo()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_SUBJECTPUBLICKEYINFO_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* UniqueIdentifier(::Il2CppArray<::System::Byte>* id)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_UNIQUEIDENTIFIER_OFFSET))(this, id);
		}

		::Mono::Security::ASN1* ToBeSigned(::System::String* oid)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATEBUILDER_TOBESIGNED_OFFSET))(this, oid);
		}
	};
}
