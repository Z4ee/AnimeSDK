#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/CipherSuiteCode.h"
#include "unitysdk/Mono/Security/Interface/TlsProtocols.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERSUITECODE_OFFSET UNITYSDK_OFFSET(0x18529A20)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x18529A40)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERSUITECODE_OFFSET UNITYSDK_OFFSET(0x18529A30)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PEERDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x18529A60)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x18529A50)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18529A70)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18529B10)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsConnectionInfo_TypeDefinitionIndex = 2279;

	class MonoTlsConnectionInfo : public ::System::Object
	{
	public:
		::System::String* _PeerDomainName_k__BackingField; // 0x10
		::Mono::Security::Interface::CipherSuiteCode _CipherSuiteCode_k__BackingField; // 0x18
		::Mono::Security::Interface::TlsProtocols _ProtocolVersion_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO__CTOR_OFFSET))(this);
		}

		::Mono::Security::Interface::CipherSuiteCode get_CipherSuiteCode()
		{
			return ((::Mono::Security::Interface::CipherSuiteCode(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERSUITECODE_OFFSET))(this);
		}

		::System::Void set_CipherSuiteCode(::Mono::Security::Interface::CipherSuiteCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::CipherSuiteCode))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERSUITECODE_OFFSET))(this, a1);
		}

		::Mono::Security::Interface::TlsProtocols get_ProtocolVersion()
		{
			return ((::Mono::Security::Interface::TlsProtocols(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_ProtocolVersion(::Mono::Security::Interface::TlsProtocols a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::TlsProtocols))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PROTOCOLVERSION_OFFSET))(this, a1);
		}

		::System::Void set_PeerDomainName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PEERDOMAINNAME_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_TOSTRING_OFFSET))(this);
		}
	};
}
