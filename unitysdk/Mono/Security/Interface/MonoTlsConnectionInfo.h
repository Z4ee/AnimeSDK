#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/CipherAlgorithmType.h"
#include "unitysdk/Mono/Security/Interface/CipherSuiteCode.h"
#include "unitysdk/Mono/Security/Interface/ExchangeAlgorithmType.h"
#include "unitysdk/Mono/Security/Interface/HashAlgorithmType.h"
#include "unitysdk/Mono/Security/Interface/TlsProtocols.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1E1E2230)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERSUITECODE_OFFSET UNITYSDK_OFFSET(0x1E1E21F0)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_EXCHANGEALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1E1E2270)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_HASHALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1E1E2250)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PEERDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1E1E2290)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1E1E2210)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1E1E2240)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERSUITECODE_OFFSET UNITYSDK_OFFSET(0x1E1E2200)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_EXCHANGEALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1E1E2280)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_HASHALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1E1E2260)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PEERDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1E1E22A0)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1E1E2220)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E22B0)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E2350)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsConnectionInfo_TypeDefinitionIndex = 2436;

	class MonoTlsConnectionInfo : public ::System::Object
	{
	public:
		::System::String* _PeerDomainName_k__BackingField; // 0x10
		::Mono::Security::Interface::HashAlgorithmType _HashAlgorithmType_k__BackingField; // 0x18
		::Mono::Security::Interface::CipherAlgorithmType _CipherAlgorithmType_k__BackingField; // 0x1C
		::Mono::Security::Interface::ExchangeAlgorithmType _ExchangeAlgorithmType_k__BackingField; // 0x20
		::Mono::Security::Interface::CipherSuiteCode _CipherSuiteCode_k__BackingField; // 0x24
		::Mono::Security::Interface::TlsProtocols _ProtocolVersion_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO__CTOR_OFFSET))(this);
		}

		::Mono::Security::Interface::CipherSuiteCode get_CipherSuiteCode()
		{
			return ((::Mono::Security::Interface::CipherSuiteCode(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERSUITECODE_OFFSET))(this);
		}

		::System::Void set_CipherSuiteCode(::Mono::Security::Interface::CipherSuiteCode value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::CipherSuiteCode))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERSUITECODE_OFFSET))(this, value);
		}

		::Mono::Security::Interface::TlsProtocols get_ProtocolVersion()
		{
			return ((::Mono::Security::Interface::TlsProtocols(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_ProtocolVersion(::Mono::Security::Interface::TlsProtocols value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::TlsProtocols))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PROTOCOLVERSION_OFFSET))(this, value);
		}

		::Mono::Security::Interface::CipherAlgorithmType get_CipherAlgorithmType()
		{
			return ((::Mono::Security::Interface::CipherAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERALGORITHMTYPE_OFFSET))(this);
		}

		::System::Void set_CipherAlgorithmType(::Mono::Security::Interface::CipherAlgorithmType value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::CipherAlgorithmType))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERALGORITHMTYPE_OFFSET))(this, value);
		}

		::Mono::Security::Interface::HashAlgorithmType get_HashAlgorithmType()
		{
			return ((::Mono::Security::Interface::HashAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_HASHALGORITHMTYPE_OFFSET))(this);
		}

		::System::Void set_HashAlgorithmType(::Mono::Security::Interface::HashAlgorithmType value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::HashAlgorithmType))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_HASHALGORITHMTYPE_OFFSET))(this, value);
		}

		::Mono::Security::Interface::ExchangeAlgorithmType get_ExchangeAlgorithmType()
		{
			return ((::Mono::Security::Interface::ExchangeAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_EXCHANGEALGORITHMTYPE_OFFSET))(this);
		}

		::System::Void set_ExchangeAlgorithmType(::Mono::Security::Interface::ExchangeAlgorithmType value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::ExchangeAlgorithmType))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_EXCHANGEALGORITHMTYPE_OFFSET))(this, value);
		}

		::System::String* get_PeerDomainName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PEERDOMAINNAME_OFFSET))(this);
		}

		::System::Void set_PeerDomainName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PEERDOMAINNAME_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_TOSTRING_OFFSET))(this);
		}
	};
}
