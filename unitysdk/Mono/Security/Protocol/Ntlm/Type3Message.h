#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/MessageBase.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/NtlmAuthLevel.h"

namespace Mono::Security::Protocol::Ntlm { class Type2Message; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1F4C6160)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET UNITYSDK_OFFSET(0x1F4C51D0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1F4C6340)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F4C5B30)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1F4C6550)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x1F4C5CB0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_DEFAULTAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1F4C5BD0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1F4C5F90)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1F4C6040)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1F4C5C90)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_LM_OFFSET UNITYSDK_OFFSET(0x1F4C6130)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_NT_OFFSET UNITYSDK_OFFSET(0x1F4C6140)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1F4C60F0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1F4C6110)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x1F4C5DB0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DEFAULTAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1F4C5C30)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1F4C5FA0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1F4C6050)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1F4C5CA0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_NT_OFFSET UNITYSDK_OFFSET(0x1F4C6150)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1F4C6100)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1F4C6120)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4C5160)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F4C5940)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C5070)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int Type3Message_TypeDefinitionIndex = 2423;

	class Type3Message : public ::Mono::Security::Protocol::Ntlm::MessageBase
	{
	public:
		// static const ::System::String* LegacyAPIWarning; // 0x0
		::System::String* _password; // 0x18
		::System::String* _host; // 0x20
		::System::String* _domain; // 0x28
		::Mono::Security::Protocol::Ntlm::Type2Message* _type2; // 0x30
		::Il2CppArray<::System::Byte>* _lm; // 0x38
		::Il2CppArray<::System::Byte>* _challenge; // 0x40
		::Il2CppArray<::System::Byte>* _nt; // 0x48
		::System::String* _username; // 0x50
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
