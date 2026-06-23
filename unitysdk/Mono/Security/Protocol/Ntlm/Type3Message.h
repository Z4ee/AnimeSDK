#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/MessageBase.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/NtlmAuthLevel.h"

namespace Mono::Security::Protocol::Ntlm { class Type2Message; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1E0C9770)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET UNITYSDK_OFFSET(0x1E0C87F0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1E0C9950)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E0C9140)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E0C9B60)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x1E0C92C0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_DEFAULTAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1E0C91E0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1E0C95A0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1E0C9650)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E0C92A0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_LM_OFFSET UNITYSDK_OFFSET(0x1E0C9740)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_NT_OFFSET UNITYSDK_OFFSET(0x1E0C9750)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1E0C9700)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1E0C9720)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x1E0C93C0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DEFAULTAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1E0C9240)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1E0C95B0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1E0C9660)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E0C92B0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_NT_OFFSET UNITYSDK_OFFSET(0x1E0C9760)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1E0C9710)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1E0C9730)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C8780)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E0C8F50)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C8690)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int Type3Message_TypeDefinitionIndex = 2423;

	class Type3Message : public ::Mono::Security::Protocol::Ntlm::MessageBase
	{
	public:
		// static const ::System::String* LegacyAPIWarning; // 0x0
		::System::String* _username; // 0x18
		::Il2CppArray<::System::Byte>* _lm; // 0x20
		::System::String* _host; // 0x28
		::Il2CppArray<::System::Byte>* _challenge; // 0x30
		::Il2CppArray<::System::Byte>* _nt; // 0x38
		::System::String* _password; // 0x40
		::Mono::Security::Protocol::Ntlm::Type2Message* _type2; // 0x48
		::System::String* _domain; // 0x50
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel _level; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::Mono::Security::Protocol::Ntlm::Type2Message* type2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Ntlm::Type2Message*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_2_OFFSET))(this, type2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET))(this);
		}

		static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_DefaultAuthLevel()
		{
			return ((::Mono::Security::Protocol::Ntlm::NtlmAuthLevel(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_DEFAULTAUTHLEVEL_OFFSET))();
		}

		static ::System::Void set_DefaultAuthLevel(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value)
		{
			return ((::System::Void(*)(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DEFAULTAUTHLEVEL_OFFSET))(value);
		}

		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_Level()
		{
			return ((::Mono::Security::Protocol::Ntlm::NtlmAuthLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_LEVEL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Challenge()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_CHALLENGE_OFFSET))(this);
		}

		::System::Void set_Challenge(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_CHALLENGE_OFFSET))(this, value);
		}

		::System::String* get_Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_DOMAIN_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET))(this, value);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_HOST_OFFSET))(this, value);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::String* get_Username()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_Username(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_LM()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_LM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_NT()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_NT_OFFSET))(this);
		}

		::System::Void set_NT(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_NT_OFFSET))(this, value);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET))(this, message);
		}

		::System::String* DecodeString(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 len)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET))(this, buffer, offset, len);
		}

		::Il2CppArray<::System::Byte>* EncodeString(::System::String* text)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET))(this, text);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET))(this);
		}
	};
}
