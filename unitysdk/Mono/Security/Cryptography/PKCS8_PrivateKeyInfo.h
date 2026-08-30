#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODEDSA_OFFSET UNITYSDK_OFFSET(0x1D241630)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODERSA_OFFSET UNITYSDK_OFFSET(0x1D240DD0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODE_OFFSET UNITYSDK_OFFSET(0x1D240820)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1D241800)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_2_OFFSET UNITYSDK_OFFSET(0x1D241910)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_OFFSET UNITYSDK_OFFSET(0x1D2413F0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1D240BE0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1D240D30)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_REMOVELEADINGZERO_OFFSET UNITYSDK_OFFSET(0x1D240CC0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2407B0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D240750)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_PrivateKeyInfo_TypeDefinitionIndex = 2308;

	class PKCS8_PrivateKeyInfo : public ::System::Object
	{
	public:
		::System::String* _algorithm; // 0x10
		::System::Collections::ArrayList* _list; // 0x18
		::Il2CppArray<::System::Byte>* _key; // 0x20
		::System::Int32 _version; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO__CTOR_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_PrivateKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_PRIVATEKEY_OFFSET))(this);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODE_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Byte>* RemoveLeadingZero(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_REMOVELEADINGZERO_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* Normalize(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_NORMALIZE_OFFSET))(a1, a2);
		}

		static ::System::Security::Cryptography::RSA* DecodeRSA(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODERSA_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* Encode(::System::Security::Cryptography::RSA* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::DSA* DecodeDSA(::Il2CppArray<::System::Byte>* a1, ::System::Security::Cryptography::DSAParameters a2)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODEDSA_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* Encode_1(::System::Security::Cryptography::DSA* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* Encode_2(::System::Security::Cryptography::AsymmetricAlgorithm* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_ENCODE_2_OFFSET))(a1);
		}
	};
}
