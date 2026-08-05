#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureDeformatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F8E7260)
#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x1F8E7050)
#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F8E70E0)
#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8E6FC0)
#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E6FB0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int RSASslSignatureDeformatter_TypeDefinitionIndex = 2362;

	class RSASslSignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter
	{
	public:
		::System::Security::Cryptography::HashAlgorithm* hash; // 0x10
		::System::Security::Cryptography::RSA* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER__CTOR_1_OFFSET))(this, key);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* rgbHash, ::Il2CppArray<::System::Byte>* rgbSignature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET))(this, rgbHash, rgbSignature);
		}

		::System::Void SetHashAlgorithm(::System::String* strName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET))(this, strName);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREDEFORMATTER_SETKEY_OFFSET))(this, key);
		}
	};
}
