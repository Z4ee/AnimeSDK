#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls { class CipherSuite; }

#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E7F9420)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_CIPHER_OFFSET UNITYSDK_OFFSET(0x1E7F93C0)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_CLIENTWRITEMAC_OFFSET UNITYSDK_OFFSET(0x1E7F93E0)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_GET_SERVERWRITEMAC_OFFSET UNITYSDK_OFFSET(0x1E7F9400)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_CIPHER_OFFSET UNITYSDK_OFFSET(0x1E7F93D0)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_CLIENTWRITEMAC_OFFSET UNITYSDK_OFFSET(0x1E7F93F0)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS_SET_SERVERWRITEMAC_OFFSET UNITYSDK_OFFSET(0x1E7F9410)
#define MONO_SECURITY_PROTOCOL_TLS_SECURITYPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F93B0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SecurityParameters_TypeDefinitionIndex = 2368;

	class SecurityParameters : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* clientWriteMAC; // 0x10
		::Mono::Security::Protocol::Tls::CipherSuite* cipher; // 0x18
		::Il2CppArray<::System::Byte>* serverWriteMAC; // 0x20

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
