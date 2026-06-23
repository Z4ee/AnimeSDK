#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIKEYBLOBDSA_1_OFFSET UNITYSDK_OFFSET(0x1DB5F5C0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIKEYBLOBDSA_OFFSET UNITYSDK_OFFSET(0x1DB5F5B0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x1DB5F470)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIKEYBLOB_OFFSET UNITYSDK_OFFSET(0x1DB5F460)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOBDSA_1_OFFSET UNITYSDK_OFFSET(0x1DB5CD50)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOBDSA_OFFSET UNITYSDK_OFFSET(0x1DB5CD40)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x1DB5C370)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_OFFSET UNITYSDK_OFFSET(0x1DB5C360)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPUBLICKEYBLOBDSA_1_OFFSET UNITYSDK_OFFSET(0x1DB5E610)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPUBLICKEYBLOBDSA_OFFSET UNITYSDK_OFFSET(0x1DB5E600)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPUBLICKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x1DB5DF40)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPUBLICKEYBLOB_OFFSET UNITYSDK_OFFSET(0x1DB5DF30)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEXCHAR_OFFSET UNITYSDK_OFFSET(0x1DB5FA80)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEX_OFFSET UNITYSDK_OFFSET(0x1DB5FB10)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_GETBYTESLE_OFFSET UNITYSDK_OFFSET(0x1DB5C210)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x1DB5F830)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIKEYBLOB_2_OFFSET UNITYSDK_OFFSET(0x1DB5F8B0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIKEYBLOB_OFFSET UNITYSDK_OFFSET(0x1DB5F6D0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIPRIVATEKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x1DB5DA30)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIPRIVATEKEYBLOB_OFFSET UNITYSDK_OFFSET(0x1DB5D550)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIPUBLICKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x1DB5EF50)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIPUBLICKEYBLOB_OFFSET UNITYSDK_OFFSET(0x1DB5EC40)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET UNITYSDK_OFFSET(0x1DB5F930)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOINT32LE_OFFSET UNITYSDK_OFFSET(0x1DB5C0D0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOUINT32LE_OFFSET UNITYSDK_OFFSET(0x1DB5C170)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TRIM_OFFSET UNITYSDK_OFFSET(0x1DB5C2C0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5C0C0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConvert_TypeDefinitionIndex = 2448;

	class CryptoConvert : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT__CTOR_OFFSET))(this);
		}

		static ::System::Int32 ToInt32LE(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOINT32LE_OFFSET))(bytes, offset);
		}

		static ::System::UInt32 ToUInt32LE(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOUINT32LE_OFFSET))(bytes, offset);
		}

		static ::Il2CppArray<::System::Byte>* GetBytesLE(::System::Int32 val)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_GETBYTESLE_OFFSET))(val);
		}

		static ::Il2CppArray<::System::Byte>* Trim(::Il2CppArray<::System::Byte>* array)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TRIM_OFFSET))(array);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::Il2CppArray<::System::Byte>* blob)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_OFFSET))(blob);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob_1(::Il2CppArray<::System::Byte>* blob, ::System::Int32 offset)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_1_OFFSET))(blob, offset);
		}

		static ::System::Security::Cryptography::DSA* FromCapiPrivateKeyBlobDSA(::Il2CppArray<::System::Byte>* blob)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOBDSA_OFFSET))(blob);
		}

		static ::System::Security::Cryptography::DSA* FromCapiPrivateKeyBlobDSA_1(::Il2CppArray<::System::Byte>* blob, ::System::Int32 offset)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOBDSA_1_OFFSET))(blob, offset);
		}

		static ::Il2CppArray<::System::Byte>* ToCapiPrivateKeyBlob(::System::Security::Cryptography::RSA* rsa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIPRIVATEKEYBLOB_OFFSET))(rsa);
		}

		static ::Il2CppArray<::System::Byte>* ToCapiPrivateKeyBlob_1(::System::Security::Cryptography::DSA* dsa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIPRIVATEKEYBLOB_1_OFFSET))(dsa);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPublicKeyBlob(::Il2CppArray<::System::Byte>* blob)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPUBLICKEYBLOB_OFFSET))(blob);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPublicKeyBlob_1(::Il2CppArray<::System::Byte>* blob, ::System::Int32 offset)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPUBLICKEYBLOB_1_OFFSET))(blob, offset);
		}

		static ::System::Security::Cryptography::DSA* FromCapiPublicKeyBlobDSA(::Il2CppArray<::System::Byte>* blob)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPUBLICKEYBLOBDSA_OFFSET))(blob);
		}

		static ::System::Security::Cryptography::DSA* FromCapiPublicKeyBlobDSA_1(::Il2CppArray<::System::Byte>* blob, ::System::Int32 offset)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPUBLICKEYBLOBDSA_1_OFFSET))(blob, offset);
		}

		static ::Il2CppArray<::System::Byte>* ToCapiPublicKeyBlob(::System::Security::Cryptography::RSA* rsa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIPUBLICKEYBLOB_OFFSET))(rsa);
		}

		static ::Il2CppArray<::System::Byte>* ToCapiPublicKeyBlob_1(::System::Security::Cryptography::DSA* dsa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIPUBLICKEYBLOB_1_OFFSET))(dsa);
		}

		static ::System::Security::Cryptography::RSA* FromCapiKeyBlob(::Il2CppArray<::System::Byte>* blob)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIKEYBLOB_OFFSET))(blob);
		}

		static ::System::Security::Cryptography::RSA* FromCapiKeyBlob_1(::Il2CppArray<::System::Byte>* blob, ::System::Int32 offset)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIKEYBLOB_1_OFFSET))(blob, offset);
		}

		static ::System::Security::Cryptography::DSA* FromCapiKeyBlobDSA(::Il2CppArray<::System::Byte>* blob)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIKEYBLOBDSA_OFFSET))(blob);
		}

		static ::System::Security::Cryptography::DSA* FromCapiKeyBlobDSA_1(::Il2CppArray<::System::Byte>* blob, ::System::Int32 offset)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIKEYBLOBDSA_1_OFFSET))(blob, offset);
		}

		static ::Il2CppArray<::System::Byte>* ToCapiKeyBlob(::System::Security::Cryptography::AsymmetricAlgorithm* keypair, ::System::Boolean includePrivateKey)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIKEYBLOB_OFFSET))(keypair, includePrivateKey);
		}

		static ::Il2CppArray<::System::Byte>* ToCapiKeyBlob_1(::System::Security::Cryptography::RSA* rsa, ::System::Boolean includePrivateKey)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIKEYBLOB_1_OFFSET))(rsa, includePrivateKey);
		}

		static ::Il2CppArray<::System::Byte>* ToCapiKeyBlob_2(::System::Security::Cryptography::DSA* dsa, ::System::Boolean includePrivateKey)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::DSA*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOCAPIKEYBLOB_2_OFFSET))(dsa, includePrivateKey);
		}

		static ::System::String* ToHex(::Il2CppArray<::System::Byte>* input)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET))(input);
		}

		static ::System::Byte FromHexChar(::System::Char c)
		{
			return ((::System::Byte(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEXCHAR_OFFSET))(c);
		}

		static ::Il2CppArray<::System::Byte>* FromHex(::System::String* hex)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEX_OFFSET))(hex);
		}
	};
}
