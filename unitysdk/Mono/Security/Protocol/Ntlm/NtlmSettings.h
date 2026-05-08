#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/NtlmAuthLevel.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS_GET_DEFAULTAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1C4C7BC0)
#define MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS_SET_DEFAULTAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1C4C7C20)
#define MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4C7C80)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int NtlmSettings_TypeDefinitionIndex = 2421;

	class NtlmSettings : public ::System::Object
	{
	public:
		static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* StaticGet_defaultAuthLevel()
		{
			return (::Mono::Security::Protocol::Ntlm::NtlmAuthLevel*)Il2CppClass::FromTypeDefinitionIndex(NtlmSettings_TypeDefinitionIndex)->GetStaticField(0xF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS__CCTOR_OFFSET))();
		}

		static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_DefaultAuthLevel()
		{
			return ((::Mono::Security::Protocol::Ntlm::NtlmAuthLevel(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS_GET_DEFAULTAUTHLEVEL_OFFSET))();
		}

		static ::System::Void set_DefaultAuthLevel(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value)
		{
			return ((::System::Void(*)(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS_SET_DEFAULTAUTHLEVEL_OFFSET))(value);
		}
	};
}
