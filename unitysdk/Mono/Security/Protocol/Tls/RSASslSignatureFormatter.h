#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureFormatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x1C481790)
#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C481890)
#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x1C481700)
#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C481670)
#define MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C481660)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int RSASslSignatureFormatter_TypeDefinitionIndex = 2364;

	class RSASslSignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter
	{
	public:
		::System::Security::Cryptography::HashAlgorithm* hash; // 0x10
		::System::Security::Cryptography::RSA* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER__CTOR_1_OFFSET))(this, key);
		}

		::Il2CppArray<::System::Byte>* CreateSignature(::Il2CppArray<::System::Byte>* rgbHash)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER_CREATESIGNATURE_OFFSET))(this, rgbHash);
		}

		::System::Void SetHashAlgorithm(::System::String* strName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET))(this, strName);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RSASSLSIGNATUREFORMATTER_SETKEY_OFFSET))(this, key);
		}
	};
}
