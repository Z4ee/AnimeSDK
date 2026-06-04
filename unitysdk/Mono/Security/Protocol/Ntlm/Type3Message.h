#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/MessageBase.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/NtlmAuthLevel.h"

namespace Mono::Security::Protocol::Ntlm { class Type2Message; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1852FDE0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET UNITYSDK_OFFSET(0x1852F6B0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1852FF00)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1852F570)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x18530030)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1852F610)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1852F690)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1852F6A0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1852F230)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int Type3Message_TypeDefinitionIndex = 2269;

	class Type3Message : public ::Mono::Security::Protocol::Ntlm::MessageBase
	{
	public:
		::System::String* _domain; // 0x18
		::Il2CppArray<::System::Byte>* _nt; // 0x20
		::System::String* _username; // 0x28
		::Il2CppArray<::System::Byte>* _challenge; // 0x30
		::System::String* _password; // 0x38
		::System::String* _host; // 0x40
		::Mono::Security::Protocol::Ntlm::Type2Message* _type2; // 0x48
		::Il2CppArray<::System::Byte>* _lm; // 0x50
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel _level; // 0x58

		::System::Void _ctor(::Mono::Security::Protocol::Ntlm::Type2Message* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Ntlm::Type2Message*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET))(this, a1);
		}

		::System::Void set_Password(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET))(this, a1);
		}

		::System::Void set_Username(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET))(this, a1);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET))(this, a1);
		}

		::System::String* DecodeString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* EncodeString(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET))(this);
		}
	};
}
