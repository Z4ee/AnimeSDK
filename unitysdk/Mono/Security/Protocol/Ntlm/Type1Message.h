#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/MessageBase.h"

namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_DECODE_OFFSET UNITYSDK_OFFSET(0x17773F10)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x177740D0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x17773E10)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_SET_HOST_OFFSET UNITYSDK_OFFSET(0x17773E90)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17773DA0)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int Type1Message_TypeDefinitionIndex = 2267;

	class Type1Message : public ::Mono::Security::Protocol::Ntlm::MessageBase
	{
	public:
		::System::String* _host; // 0x18
		::System::String* _domain; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_SET_DOMAIN_OFFSET))(this, value);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_SET_HOST_OFFSET))(this, value);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_DECODE_OFFSET))(this, message);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_GETBYTES_OFFSET))(this);
		}
	};
}
