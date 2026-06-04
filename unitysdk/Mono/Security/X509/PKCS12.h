#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security { class PKCS7_ContentInfo; }
namespace Mono::Security { class PKCS7_EncryptedData; }
namespace Mono::Security::Cryptography { class PKCS8_PrivateKeyInfo; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IDictionary; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1853B400)
#define MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1853AE10)
#define MONO_SECURITY_X509_PKCS12_ADDPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x18535FA0)
#define MONO_SECURITY_X509_PKCS12_CERTIFICATESAFEBAG_OFFSET UNITYSDK_OFFSET(0x185361E0)
#define MONO_SECURITY_X509_PKCS12_CLONE_OFFSET UNITYSDK_OFFSET(0x1853C270)
#define MONO_SECURITY_X509_PKCS12_COMPARE_OFFSET UNITYSDK_OFFSET(0x18532220)
#define MONO_SECURITY_X509_PKCS12_DECODE_OFFSET UNITYSDK_OFFSET(0x18530ED0)
#define MONO_SECURITY_X509_PKCS12_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0x18533170)
#define MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET UNITYSDK_OFFSET(0x18533F90)
#define MONO_SECURITY_X509_PKCS12_ENCRYPTEDCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x1853AE20)
#define MONO_SECURITY_X509_PKCS12_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x18535440)
#define MONO_SECURITY_X509_PKCS12_FINALIZE_OFFSET UNITYSDK_OFFSET(0x185333D0)
#define MONO_SECURITY_X509_PKCS12_GETBYTES_OFFSET UNITYSDK_OFFSET(0x185375A0)
#define MONO_SECURITY_X509_PKCS12_GETEXISTINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18535610)
#define MONO_SECURITY_X509_PKCS12_GETSYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x185349F0)
#define MONO_SECURITY_X509_PKCS12_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x18534180)
#define MONO_SECURITY_X509_PKCS12_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x18533450)
#define MONO_SECURITY_X509_PKCS12_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x18533470)
#define MONO_SECURITY_X509_PKCS12_GET_MAXIMUMPASSWORDLENGTH_OFFSET UNITYSDK_OFFSET(0x1853C410)
#define MONO_SECURITY_X509_PKCS12_GET_RNG_OFFSET UNITYSDK_OFFSET(0x185349B0)
#define MONO_SECURITY_X509_PKCS12_MAC_OFFSET UNITYSDK_OFFSET(0x18531EB0)
#define MONO_SECURITY_X509_PKCS12_READSAFEBAG_OFFSET UNITYSDK_OFFSET(0x18532290)
#define MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1853B890)
#define MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1853AE00)
#define MONO_SECURITY_X509_PKCS12_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x18533460)
#define MONO_SECURITY_X509_PKCS12_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x18530C30)
#define MONO_SECURITY_X509_PKCS12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1853C470)
#define MONO_SECURITY_X509_PKCS12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18530BC0)
#define MONO_SECURITY_X509_PKCS12__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18531E70)
#define MONO_SECURITY_X509_PKCS12__CTOR_OFFSET UNITYSDK_OFFSET(0x18530A10)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_TypeDefinitionIndex = 2253;

	class PKCS12 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_password_max_length()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PKCS12_TypeDefinitionIndex)->GetStaticField(0x89C0);
		}
		::System::Collections::ArrayList* _safeBags; // 0x10
		::System::Collections::ArrayList* _keyBags; // 0x18
		::System::Collections::ArrayList* _secretBags; // 0x20
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x28
		::Il2CppArray<::System::Byte>* _password; // 0x30
		::Mono::Security::X509::X509CertificateCollection* _certs; // 0x38
		::System::Int32 _iterations; // 0x40
		::System::Boolean _certsChanged; // 0x44
		::System::Boolean _secretBagsChanged; // 0x45
		::System::Boolean _keyBagsChanged; // 0x46

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CCTOR_OFFSET))();
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECODE_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FINALIZE_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SET_PASSWORD_OFFSET))(this, a1);
		}

		::System::Int32 get_IterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_ITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_IterationCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SET_ITERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::ArrayList* get_Keys()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_KEYS_OFFSET))(this);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_RNG()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_RNG_OFFSET))(this);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Security::Cryptography::SymmetricAlgorithm*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETSYMMETRICALGORITHM_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Byte>* Decrypt_1(::Mono::Security::PKCS7_EncryptedData* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::PKCS7_EncryptedData*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECRYPT_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* Encrypt(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ENCRYPT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Security::Cryptography::DSAParameters GetExistingParameters(::System::Boolean& a1)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETEXISTINGPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void AddPrivateKey(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDPRIVATEKEY_OFFSET))(this, a1);
		}

		::System::Void ReadSafeBag(::Mono::Security::ASN1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_READSAFEBAG_OFFSET))(this, a1);
		}

		::Mono::Security::ASN1* CertificateSafeBag(::Mono::Security::X509::X509Certificate* a1, ::System::Collections::IDictionary* a2)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_CERTIFICATESAFEBAG_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* MAC(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_MAC_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETBYTES_OFFSET))(this);
		}

		::Mono::Security::PKCS7_ContentInfo* EncryptedContentInfo(::Mono::Security::ASN1* a1, ::System::String* a2)
		{
			return ((::Mono::Security::PKCS7_ContentInfo*(*)(::PVOID, ::Mono::Security::ASN1*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ENCRYPTEDCONTENTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void AddCertificate(::Mono::Security::X509::X509Certificate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET))(this, a1);
		}

		::System::Void AddCertificate_1(::Mono::Security::X509::X509Certificate* a1, ::System::Collections::IDictionary* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_1_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveCertificate(::Mono::Security::X509::X509Certificate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET))(this, a1);
		}

		::System::Void RemoveCertificate_1(::Mono::Security::X509::X509Certificate* a1, ::System::Collections::IDictionary* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_1_OFFSET))(this, a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_CLONE_OFFSET))(this);
		}

		static ::System::Int32 get_MaximumPasswordLength()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_MAXIMUMPASSWORDLENGTH_OFFSET))();
		}
	};
}
