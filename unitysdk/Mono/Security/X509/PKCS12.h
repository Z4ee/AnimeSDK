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

#define MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x17780840)
#define MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x17780250)
#define MONO_SECURITY_X509_PKCS12_ADDPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1777B630)
#define MONO_SECURITY_X509_PKCS12_CERTIFICATESAFEBAG_OFFSET UNITYSDK_OFFSET(0x1777B880)
#define MONO_SECURITY_X509_PKCS12_CLONE_OFFSET UNITYSDK_OFFSET(0x177816A0)
#define MONO_SECURITY_X509_PKCS12_COMPARE_OFFSET UNITYSDK_OFFSET(0x17777990)
#define MONO_SECURITY_X509_PKCS12_DECODE_OFFSET UNITYSDK_OFFSET(0x17776620)
#define MONO_SECURITY_X509_PKCS12_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0x177788C0)
#define MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET UNITYSDK_OFFSET(0x177796E0)
#define MONO_SECURITY_X509_PKCS12_ENCRYPTEDCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x17780260)
#define MONO_SECURITY_X509_PKCS12_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x1777AB20)
#define MONO_SECURITY_X509_PKCS12_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17778B20)
#define MONO_SECURITY_X509_PKCS12_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1777CBE0)
#define MONO_SECURITY_X509_PKCS12_GETEXISTINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1777ACC0)
#define MONO_SECURITY_X509_PKCS12_GETSYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x1777A100)
#define MONO_SECURITY_X509_PKCS12_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x177798B0)
#define MONO_SECURITY_X509_PKCS12_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x17778BA0)
#define MONO_SECURITY_X509_PKCS12_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x17778BC0)
#define MONO_SECURITY_X509_PKCS12_GET_MAXIMUMPASSWORDLENGTH_OFFSET UNITYSDK_OFFSET(0x17781840)
#define MONO_SECURITY_X509_PKCS12_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1777A0C0)
#define MONO_SECURITY_X509_PKCS12_MAC_OFFSET UNITYSDK_OFFSET(0x177775F0)
#define MONO_SECURITY_X509_PKCS12_READSAFEBAG_OFFSET UNITYSDK_OFFSET(0x17777A00)
#define MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x17780CE0)
#define MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x17780240)
#define MONO_SECURITY_X509_PKCS12_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x17778BB0)
#define MONO_SECURITY_X509_PKCS12_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x17776380)
#define MONO_SECURITY_X509_PKCS12__CCTOR_OFFSET UNITYSDK_OFFSET(0x177818A0)
#define MONO_SECURITY_X509_PKCS12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17776310)
#define MONO_SECURITY_X509_PKCS12__CTOR_2_OFFSET UNITYSDK_OFFSET(0x177775B0)
#define MONO_SECURITY_X509_PKCS12__CTOR_OFFSET UNITYSDK_OFFSET(0x17776160)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_TypeDefinitionIndex = 2253;

	class PKCS12 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_password_max_length()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PKCS12_TypeDefinitionIndex)->GetStaticField(0x5450);
		}
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x10
		::Il2CppArray<::System::Byte>* _password; // 0x18
		::System::Collections::ArrayList* _secretBags; // 0x20
		::System::Collections::ArrayList* _keyBags; // 0x28
		::System::Collections::ArrayList* _safeBags; // 0x30
		::Mono::Security::X509::X509CertificateCollection* _certs; // 0x38
		::System::Boolean _keyBagsChanged; // 0x40
		::System::Boolean _certsChanged; // 0x41
		::System::Boolean _secretBagsChanged; // 0x42
		::System::Int32 _iterations; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* data, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CTOR_2_OFFSET))(this, data, password);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CCTOR_OFFSET))();
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECODE_OFFSET))(this, data);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FINALIZE_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Int32 get_IterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_ITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_IterationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SET_ITERATIONCOUNT_OFFSET))(this, value);
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

		::System::Boolean Compare(::Il2CppArray<::System::Byte>* expected, ::Il2CppArray<::System::Byte>* actual)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_COMPARE_OFFSET))(this, expected, actual);
		}

		::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::System::String* algorithmOid, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterationCount)
		{
			return ((::System::Security::Cryptography::SymmetricAlgorithm*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETSYMMETRICALGORITHM_OFFSET))(this, algorithmOid, salt, iterationCount);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::System::String* algorithmOid, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterationCount, ::Il2CppArray<::System::Byte>* encryptedData)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET))(this, algorithmOid, salt, iterationCount, encryptedData);
		}

		::Il2CppArray<::System::Byte>* Decrypt_1(::Mono::Security::PKCS7_EncryptedData* ed)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::PKCS7_EncryptedData*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECRYPT_1_OFFSET))(this, ed);
		}

		::Il2CppArray<::System::Byte>* Encrypt(::System::String* algorithmOid, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterationCount, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ENCRYPT_OFFSET))(this, algorithmOid, salt, iterationCount, data);
		}

		::System::Security::Cryptography::DSAParameters GetExistingParameters(::System::Boolean& found)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETEXISTINGPARAMETERS_OFFSET))(this, found);
		}

		::System::Void AddPrivateKey(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* pki)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDPRIVATEKEY_OFFSET))(this, pki);
		}

		::System::Void ReadSafeBag(::Mono::Security::ASN1* safeBag)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_READSAFEBAG_OFFSET))(this, safeBag);
		}

		::Mono::Security::ASN1* CertificateSafeBag(::Mono::Security::X509::X509Certificate* x509, ::System::Collections::IDictionary* attributes)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_CERTIFICATESAFEBAG_OFFSET))(this, x509, attributes);
		}

		::Il2CppArray<::System::Byte>* MAC(::Il2CppArray<::System::Byte>* password, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterations, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_MAC_OFFSET))(this, password, salt, iterations, data);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETBYTES_OFFSET))(this);
		}

		::Mono::Security::PKCS7_ContentInfo* EncryptedContentInfo(::Mono::Security::ASN1* safeBags, ::System::String* algorithmOid)
		{
			return ((::Mono::Security::PKCS7_ContentInfo*(*)(::PVOID, ::Mono::Security::ASN1*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ENCRYPTEDCONTENTINFO_OFFSET))(this, safeBags, algorithmOid);
		}

		::System::Void AddCertificate(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET))(this, cert);
		}

		::System::Void AddCertificate_1(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_1_OFFSET))(this, cert, attributes);
		}

		::System::Void RemoveCertificate(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET))(this, cert);
		}

		::System::Void RemoveCertificate_1(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_1_OFFSET))(this, cert, attrs);
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
