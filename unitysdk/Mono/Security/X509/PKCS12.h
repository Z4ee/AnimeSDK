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
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1D378210)
#define MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D377830)
#define MONO_SECURITY_X509_PKCS12_ADDKEYBAG_1_OFFSET UNITYSDK_OFFSET(0x1D379850)
#define MONO_SECURITY_X509_PKCS12_ADDKEYBAG_OFFSET UNITYSDK_OFFSET(0x1D379840)
#define MONO_SECURITY_X509_PKCS12_ADDPKCS8SHROUDEDKEYBAG_1_OFFSET UNITYSDK_OFFSET(0x1D378EF0)
#define MONO_SECURITY_X509_PKCS12_ADDPKCS8SHROUDEDKEYBAG_OFFSET UNITYSDK_OFFSET(0x1D378EE0)
#define MONO_SECURITY_X509_PKCS12_ADDPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1D36E150)
#define MONO_SECURITY_X509_PKCS12_ADDSECRETBAG_1_OFFSET UNITYSDK_OFFSET(0x1D37A090)
#define MONO_SECURITY_X509_PKCS12_ADDSECRETBAG_OFFSET UNITYSDK_OFFSET(0x1D37A080)
#define MONO_SECURITY_X509_PKCS12_CERTIFICATESAFEBAG_OFFSET UNITYSDK_OFFSET(0x1D372590)
#define MONO_SECURITY_X509_PKCS12_CLONE_OFFSET UNITYSDK_OFFSET(0x1D37E1F0)
#define MONO_SECURITY_X509_PKCS12_COMPAREASYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D378E30)
#define MONO_SECURITY_X509_PKCS12_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D36B7D0)
#define MONO_SECURITY_X509_PKCS12_DECODE_OFFSET UNITYSDK_OFFSET(0x1D36AA70)
#define MONO_SECURITY_X509_PKCS12_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0x1D36C300)
#define MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET UNITYSDK_OFFSET(0x1D36CCF0)
#define MONO_SECURITY_X509_PKCS12_ENCRYPTEDCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x1D377840)
#define MONO_SECURITY_X509_PKCS12_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x1D36DD00)
#define MONO_SECURITY_X509_PKCS12_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D36C3C0)
#define MONO_SECURITY_X509_PKCS12_GETASYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D37A500)
#define MONO_SECURITY_X509_PKCS12_GETATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1D37D670)
#define MONO_SECURITY_X509_PKCS12_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D37C820)
#define MONO_SECURITY_X509_PKCS12_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1D373BB0)
#define MONO_SECURITY_X509_PKCS12_GETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D37BDD0)
#define MONO_SECURITY_X509_PKCS12_GETEXISTINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D36DE90)
#define MONO_SECURITY_X509_PKCS12_GETSECRET_OFFSET UNITYSDK_OFFSET(0x1D37B430)
#define MONO_SECURITY_X509_PKCS12_GETSYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D36D780)
#define MONO_SECURITY_X509_PKCS12_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1D36D2A0)
#define MONO_SECURITY_X509_PKCS12_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1D36C440)
#define MONO_SECURITY_X509_PKCS12_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D36C460)
#define MONO_SECURITY_X509_PKCS12_GET_MAXIMUMPASSWORDLENGTH_OFFSET UNITYSDK_OFFSET(0x1D37E3E0)
#define MONO_SECURITY_X509_PKCS12_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1D36D720)
#define MONO_SECURITY_X509_PKCS12_GET_SECRETS_OFFSET UNITYSDK_OFFSET(0x1D36CEB0)
#define MONO_SECURITY_X509_PKCS12_KEYBAGSAFEBAG_OFFSET UNITYSDK_OFFSET(0x1D36FA90)
#define MONO_SECURITY_X509_PKCS12_LOADFILE_OFFSET UNITYSDK_OFFSET(0x1D37E530)
#define MONO_SECURITY_X509_PKCS12_LOADFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1D37E7F0)
#define MONO_SECURITY_X509_PKCS12_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1D37E6E0)
#define MONO_SECURITY_X509_PKCS12_MAC_OFFSET UNITYSDK_OFFSET(0x1D36B5A0)
#define MONO_SECURITY_X509_PKCS12_PKCS8SHROUDEDKEYBAGSAFEBAG_OFFSET UNITYSDK_OFFSET(0x1D36E2D0)
#define MONO_SECURITY_X509_PKCS12_READSAFEBAG_OFFSET UNITYSDK_OFFSET(0x1D36B840)
#define MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1D378550)
#define MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D377820)
#define MONO_SECURITY_X509_PKCS12_REMOVEKEYBAG_OFFSET UNITYSDK_OFFSET(0x1D379C80)
#define MONO_SECURITY_X509_PKCS12_REMOVEPKCS8SHROUDEDKEYBAG_OFFSET UNITYSDK_OFFSET(0x1D3793B0)
#define MONO_SECURITY_X509_PKCS12_REMOVESECRETBAG_OFFSET UNITYSDK_OFFSET(0x1D37A2E0)
#define MONO_SECURITY_X509_PKCS12_SAVETOFILE_OFFSET UNITYSDK_OFFSET(0x1D37E050)
#define MONO_SECURITY_X509_PKCS12_SECRETBAGSAFEBAG_OFFSET UNITYSDK_OFFSET(0x1D371190)
#define MONO_SECURITY_X509_PKCS12_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1D36C450)
#define MONO_SECURITY_X509_PKCS12_SET_MAXIMUMPASSWORDLENGTH_OFFSET UNITYSDK_OFFSET(0x1D37E440)
#define MONO_SECURITY_X509_PKCS12_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1D36A800)
#define MONO_SECURITY_X509_PKCS12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D37E8B0)
#define MONO_SECURITY_X509_PKCS12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D36A790)
#define MONO_SECURITY_X509_PKCS12__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D36B530)
#define MONO_SECURITY_X509_PKCS12__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D36B570)
#define MONO_SECURITY_X509_PKCS12__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36A540)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_TypeDefinitionIndex = 2289;

	class PKCS12 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_password_max_length()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PKCS12_TypeDefinitionIndex)->GetStaticField(0xF40);
		}
		// static const ::System::String* pbeWithSHAAnd128BitRC4; // 0x0
		// static const ::System::String* pbeWithSHAAnd40BitRC4; // 0x0
		// static const ::System::String* pbeWithSHAAnd3KeyTripleDESCBC; // 0x0
		// static const ::System::String* pbeWithSHAAnd2KeyTripleDESCBC; // 0x0
		// static const ::System::String* pbeWithSHAAnd128BitRC2CBC; // 0x0
		// static const ::System::String* pbeWithSHAAnd40BitRC2CBC; // 0x0
		// static const ::System::String* keyBag; // 0x0
		// static const ::System::String* pkcs8ShroudedKeyBag; // 0x0
		// static const ::System::String* certBag; // 0x0
		// static const ::System::String* crlBag; // 0x0
		// static const ::System::String* secretBag; // 0x0
		// static const ::System::String* safeContentsBag; // 0x0
		// static const ::System::String* x509Certificate; // 0x0
		// static const ::System::String* sdsiCertificate; // 0x0
		// static const ::System::String* x509Crl; // 0x0
		// static const ::System::Int32 recommendedIterationCount = 0x7D0; // 0x0
		// static const ::System::Int32 CryptoApiPasswordLimit = 0x20; // 0x0
		::System::Collections::ArrayList* _safeBags; // 0x10
		::Mono::Security::X509::X509CertificateCollection* _certs; // 0x18
		::System::Collections::ArrayList* _secretBags; // 0x20
		::Il2CppArray<::System::Byte>* _password; // 0x28
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x30
		::System::Collections::ArrayList* _keyBags; // 0x38
		::System::Boolean _keyBagsChanged; // 0x40
		::System::Boolean _secretBagsChanged; // 0x41
		::System::Boolean _certsChanged; // 0x42
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

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* data, ::Il2CppArray<::System::Byte>* password)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12__CTOR_3_OFFSET))(this, data, password);
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

		::System::Collections::ArrayList* get_Secrets()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_SECRETS_OFFSET))(this);
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

		::Mono::Security::ASN1* Pkcs8ShroudedKeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa, ::System::Collections::IDictionary* attributes)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_PKCS8SHROUDEDKEYBAGSAFEBAG_OFFSET))(this, aa, attributes);
		}

		::Mono::Security::ASN1* KeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa, ::System::Collections::IDictionary* attributes)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_KEYBAGSAFEBAG_OFFSET))(this, aa, attributes);
		}

		::Mono::Security::ASN1* SecretBagSafeBag(::Il2CppArray<::System::Byte>* secret, ::System::Collections::IDictionary* attributes)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SECRETBAGSAFEBAG_OFFSET))(this, secret, attributes);
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

		::System::Boolean CompareAsymmetricAlgorithm(::System::Security::Cryptography::AsymmetricAlgorithm* a1, ::System::Security::Cryptography::AsymmetricAlgorithm* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_COMPAREASYMMETRICALGORITHM_OFFSET))(this, a1, a2);
		}

		::System::Void AddPkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDPKCS8SHROUDEDKEYBAG_OFFSET))(this, aa);
		}

		::System::Void AddPkcs8ShroudedKeyBag_1(::System::Security::Cryptography::AsymmetricAlgorithm* aa, ::System::Collections::IDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDPKCS8SHROUDEDKEYBAG_1_OFFSET))(this, aa, attributes);
		}

		::System::Void RemovePkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVEPKCS8SHROUDEDKEYBAG_OFFSET))(this, aa);
		}

		::System::Void AddKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDKEYBAG_OFFSET))(this, aa);
		}

		::System::Void AddKeyBag_1(::System::Security::Cryptography::AsymmetricAlgorithm* aa, ::System::Collections::IDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDKEYBAG_1_OFFSET))(this, aa, attributes);
		}

		::System::Void RemoveKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVEKEYBAG_OFFSET))(this, aa);
		}

		::System::Void AddSecretBag(::Il2CppArray<::System::Byte>* secret)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDSECRETBAG_OFFSET))(this, secret);
		}

		::System::Void AddSecretBag_1(::Il2CppArray<::System::Byte>* secret, ::System::Collections::IDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDSECRETBAG_1_OFFSET))(this, secret, attributes);
		}

		::System::Void RemoveSecretBag(::Il2CppArray<::System::Byte>* secret)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVESECRETBAG_OFFSET))(this, secret);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* GetAsymmetricAlgorithm(::System::Collections::IDictionary* attrs)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETASYMMETRICALGORITHM_OFFSET))(this, attrs);
		}

		::Il2CppArray<::System::Byte>* GetSecret(::System::Collections::IDictionary* attrs)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETSECRET_OFFSET))(this, attrs);
		}

		::Mono::Security::X509::X509Certificate* GetCertificate(::System::Collections::IDictionary* attrs)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETCERTIFICATE_OFFSET))(this, attrs);
		}

		::System::Collections::IDictionary* GetAttributes(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETATTRIBUTES_OFFSET))(this, aa);
		}

		::System::Collections::IDictionary* GetAttributes_1(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETATTRIBUTES_1_OFFSET))(this, cert);
		}

		::System::Void SaveToFile(::System::String* filename)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SAVETOFILE_OFFSET))(this, filename);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_CLONE_OFFSET))(this);
		}

		static ::System::Int32 get_MaximumPasswordLength()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_MAXIMUMPASSWORDLENGTH_OFFSET))();
		}

		static ::System::Void set_MaximumPasswordLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SET_MAXIMUMPASSWORDLENGTH_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* LoadFile(::System::String* filename)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_LOADFILE_OFFSET))(filename);
		}

		static ::Mono::Security::X509::PKCS12* LoadFromFile(::System::String* filename)
		{
			return ((::Mono::Security::X509::PKCS12*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_LOADFROMFILE_OFFSET))(filename);
		}

		static ::Mono::Security::X509::PKCS12* LoadFromFile_1(::System::String* filename, ::System::String* password)
		{
			return ((::Mono::Security::X509::PKCS12*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_LOADFROMFILE_1_OFFSET))(filename, password);
		}
	};
}
