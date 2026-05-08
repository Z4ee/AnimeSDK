#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls { class CipherSuite; }

#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4C8980)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_CIPHER_OFFSET UNITYSDK_OFFSET(0x1C4C8920)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_CLIENTWRITEMAC_OFFSET UNITYSDK_OFFSET(0x1C4C8940)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_SERVERWRITEMAC_OFFSET UNITYSDK_OFFSET(0x1C4C8960)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_CIPHER_OFFSET UNITYSDK_OFFSET(0x1C4C8930)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_CLIENTWRITEMAC_OFFSET UNITYSDK_OFFSET(0x1C4C8950)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_SERVERWRITEMAC_OFFSET UNITYSDK_OFFSET(0x1C4C8970)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C8910)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SecurityParameters_TypeDefinitionIndex = 2369;

	class SecurityParameters : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* clientWriteMAC; // 0x10
		::Il2CppArray<::System::Byte>* serverWriteMAC; // 0x18
		::Mono::Security::Protocol::Tls::CipherSuite* cipher; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS__CTOR_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::CipherSuite* get_Cipher()
		{
			return ((::Mono::Security::Protocol::Tls::CipherSuite*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_CIPHER_OFFSET))(this);
		}

		::System::Void set_Cipher(::Mono::Security::Protocol::Tls::CipherSuite* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CipherSuite*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_CIPHER_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ClientWriteMAC()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_CLIENTWRITEMAC_OFFSET))(this);
		}

		::System::Void set_ClientWriteMAC(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_CLIENTWRITEMAC_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ServerWriteMAC()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_SERVERWRITEMAC_OFFSET))(this);
		}

		::System::Void set_ServerWriteMAC(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_SERVERWRITEMAC_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_CLEAR_OFFSET))(this);
		}
	};
}
