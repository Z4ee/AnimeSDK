#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/CipherAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/CipherSuite.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ContentType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ExchangeAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/HashAlgorithmType.h"

namespace System { class Object; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE_COMPUTECLIENTRECORDMAC_OFFSET UNITYSDK_OFFSET(0x1E040690)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE_COMPUTEKEYS_OFFSET UNITYSDK_OFFSET(0x1E0409E0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE_COMPUTEMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x1E040950)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE_COMPUTESERVERRECORDMAC_OFFSET UNITYSDK_OFFSET(0x1E0403D0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0402A0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int TlsCipherSuite_TypeDefinitionIndex = 2385;

	class TlsCipherSuite : public ::Mono::Security::Protocol::Tls::CipherSuite
	{
	public:
		// static const ::System::Int32 MacHeaderLength = 0xD; // 0x0
		::Il2CppArray<::System::Byte>* header; // 0x70
		::System::Object* headerLock; // 0x78

		::System::Void _ctor(::System::Int16 code, ::System::String* name, ::Mono::Security::Protocol::Tls::CipherAlgorithmType cipherAlgorithmType, ::Mono::Security::Protocol::Tls::HashAlgorithmType hashAlgorithmType, ::Mono::Security::Protocol::Tls::ExchangeAlgorithmType exchangeAlgorithmType, ::System::Boolean exportable, ::System::Boolean blockMode, ::System::Byte keyMaterialSize, ::System::Byte expandedKeyMaterialSize, ::System::Int16 effectiveKeyBytes, ::System::Byte ivSize, ::System::Byte blockSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::String*, ::Mono::Security::Protocol::Tls::CipherAlgorithmType, ::Mono::Security::Protocol::Tls::HashAlgorithmType, ::Mono::Security::Protocol::Tls::ExchangeAlgorithmType, ::System::Boolean, ::System::Boolean, ::System::Byte, ::System::Byte, ::System::Int16, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE__CTOR_OFFSET))(this, code, name, cipherAlgorithmType, hashAlgorithmType, exchangeAlgorithmType, exportable, blockMode, keyMaterialSize, expandedKeyMaterialSize, effectiveKeyBytes, ivSize, blockSize);
		}

		::Il2CppArray<::System::Byte>* ComputeServerRecordMAC(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* fragment)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE_COMPUTESERVERRECORDMAC_OFFSET))(this, contentType, fragment);
		}

		::Il2CppArray<::System::Byte>* ComputeClientRecordMAC(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* fragment)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE_COMPUTECLIENTRECORDMAC_OFFSET))(this, contentType, fragment);
		}

		::System::Void ComputeMasterSecret(::Il2CppArray<::System::Byte>* preMasterSecret)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE_COMPUTEMASTERSECRET_OFFSET))(this, preMasterSecret);
		}

		::System::Void ComputeKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCIPHERSUITE_COMPUTEKEYS_OFFSET))(this);
		}
	};
}
