#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/MessageBase.h"

namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_DECODE_OFFSET UNITYSDK_OFFSET(0x1FAD89B0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FAD8CC0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1FAD9100)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_GET_NONCE_OFFSET UNITYSDK_OFFSET(0x1FAD8D30)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_GET_TARGETINFO_OFFSET UNITYSDK_OFFSET(0x1FAD8FF0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x1FAD8FE0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_SET_NONCE_OFFSET UNITYSDK_OFFSET(0x1FAD8E40)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAD8930)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD8860)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int Type2Message_TypeDefinitionIndex = 2422;

	class Type2Message : public ::Mono::Security::Protocol::Ntlm::MessageBase
	{
	public:
		::Il2CppArray<::System::Byte>* _targetInfo; // 0x18
		::Il2CppArray<::System::Byte>* _nonce; // 0x20
		::System::String* _targetName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE__CTOR_1_OFFSET))(this, message);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_FINALIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Nonce()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_GET_NONCE_OFFSET))(this);
		}

		::System::Void set_Nonce(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_SET_NONCE_OFFSET))(this, value);
		}

		::System::String* get_TargetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_GET_TARGETNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_TargetInfo()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_GET_TARGETINFO_OFFSET))(this);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_DECODE_OFFSET))(this, message);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE2MESSAGE_GETBYTES_OFFSET))(this);
		}
	};
}
