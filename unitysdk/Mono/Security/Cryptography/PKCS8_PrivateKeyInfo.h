#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODEDSA_OFFSET UNITYSDK_OFFSET(0x1BD9DEB0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODERSA_OFFSET UNITYSDK_OFFSET(0x1BD9CC20)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODE_OFFSET UNITYSDK_OFFSET(0x1BD9BB90)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1BD9E0D0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_2_OFFSET UNITYSDK_OFFSET(0x1BD9E120)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_OFFSET UNITYSDK_OFFSET(0x1BD9D670)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BD9C140)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x1BD9BE30)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD9BE50)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1BD9BE60)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BD9C0C0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BD9CB20)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_REMOVELEADINGZERO_OFFSET UNITYSDK_OFFSET(0x1BD9CA90)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_SET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x1BD9BE40)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1BD9BF60)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BD9C0D0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD9BAE0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9BA40)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_PrivateKeyInfo_TypeDefinitionIndex = 2465;

	class PKCS8_PrivateKeyInfo : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* _list; // 0x10
		::Il2CppArray<::System::Byte>* _key; // 0x18
		::System::String* _algorithm; // 0x20
		::System::Int32 _version; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO__CTOR_1_OFFSET))(this, data);
		}

		::System::String* get_Algorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_ALGORITHM_OFFSET))(this);
		}

		::System::Void set_Algorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_SET_ALGORITHM_OFFSET))(this, value);
		}

		::System::Collections::ArrayList* get_Attributes()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_ATTRIBUTES_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_PrivateKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_PRIVATEKEY_OFFSET))(this);
		}

		::System::Void set_PrivateKey(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_SET_PRIVATEKEY_OFFSET))(this, value);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_SET_VERSION_OFFSET))(this, value);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODE_OFFSET))(this, data);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GETBYTES_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* RemoveLeadingZero(::Il2CppArray<::System::Byte>* bigInt)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_REMOVELEADINGZERO_OFFSET))(bigInt);
		}

		static ::Il2CppArray<::System::Byte>* Normalize(::Il2CppArray<::System::Byte>* bigInt, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_NORMALIZE_OFFSET))(bigInt, length);
		}

		static ::System::Security::Cryptography::RSA* DecodeRSA(::Il2CppArray<::System::Byte>* keypair)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODERSA_OFFSET))(keypair);
		}

		static ::Il2CppArray<::System::Byte>* Encode(::System::Security::Cryptography::RSA* rsa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_OFFSET))(rsa);
		}

		static ::System::Security::Cryptography::DSA* DecodeDSA(::Il2CppArray<::System::Byte>* privateKey, ::System::Security::Cryptography::DSAParameters dsaParameters)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODEDSA_OFFSET))(privateKey, dsaParameters);
		}

		static ::Il2CppArray<::System::Byte>* Encode_1(::System::Security::Cryptography::DSA* dsa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_1_OFFSET))(dsa);
		}

		static ::Il2CppArray<::System::Byte>* Encode_2(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_2_OFFSET))(aa);
		}
	};
}
