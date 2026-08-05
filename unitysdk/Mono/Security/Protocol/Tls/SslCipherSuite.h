#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/CipherAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/CipherSuite.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ContentType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ExchangeAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/HashAlgorithmType.h"

namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_COMPUTECLIENTRECORDMAC_OFFSET UNITYSDK_OFFSET(0x1F93AF00)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_COMPUTEKEYS_OFFSET UNITYSDK_OFFSET(0x1F93B720)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_COMPUTEMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x1F93B2A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_COMPUTESERVERRECORDMAC_OFFSET UNITYSDK_OFFSET(0x1F93ABB0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_PRF_OFFSET UNITYSDK_OFFSET(0x1F93B3C0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F93AA00)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslCipherSuite_TypeDefinitionIndex = 2372;

	class SslCipherSuite : public ::Mono::Security::Protocol::Tls::CipherSuite
	{
	public:
		// static const ::System::Int32 MacHeaderLength = 0xB; // 0x0
		::Il2CppArray<::System::Byte>* header; // 0x70
		::Il2CppArray<::System::Byte>* pad1; // 0x78
		::Il2CppArray<::System::Byte>* pad2; // 0x80

		::System::Void _ctor(::System::Int16 code, ::System::String* name, ::Mono::Security::Protocol::Tls::CipherAlgorithmType cipherAlgorithmType, ::Mono::Security::Protocol::Tls::HashAlgorithmType hashAlgorithmType, ::Mono::Security::Protocol::Tls::ExchangeAlgorithmType exchangeAlgorithmType, ::System::Boolean exportable, ::System::Boolean blockMode, ::System::Byte keyMaterialSize, ::System::Byte expandedKeyMaterialSize, ::System::Int16 effectiveKeyBytes, ::System::Byte ivSize, ::System::Byte blockSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::String*, ::Mono::Security::Protocol::Tls::CipherAlgorithmType, ::Mono::Security::Protocol::Tls::HashAlgorithmType, ::Mono::Security::Protocol::Tls::ExchangeAlgorithmType, ::System::Boolean, ::System::Boolean, ::System::Byte, ::System::Byte, ::System::Int16, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE__CTOR_OFFSET))(this, code, name, cipherAlgorithmType, hashAlgorithmType, exchangeAlgorithmType, exportable, blockMode, keyMaterialSize, expandedKeyMaterialSize, effectiveKeyBytes, ivSize, blockSize);
		}

		::Il2CppArray<::System::Byte>* ComputeServerRecordMAC(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* fragment)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_COMPUTESERVERRECORDMAC_OFFSET))(this, contentType, fragment);
		}

		::Il2CppArray<::System::Byte>* ComputeClientRecordMAC(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* fragment)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_COMPUTECLIENTRECORDMAC_OFFSET))(this, contentType, fragment);
		}

		::System::Void ComputeMasterSecret(::Il2CppArray<::System::Byte>* preMasterSecret)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_COMPUTEMASTERSECRET_OFFSET))(this, preMasterSecret);
		}

		::System::Void ComputeKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_COMPUTEKEYS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* prf(::Il2CppArray<::System::Byte>* secret, ::System::String* label, ::Il2CppArray<::System::Byte>* random)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCIPHERSUITE_PRF_OFFSET))(this, secret, label, random);
		}
	};
}
