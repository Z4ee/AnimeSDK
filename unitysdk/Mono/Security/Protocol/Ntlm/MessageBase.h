#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/NtlmFlags.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_CHECKHEADER_OFFSET UNITYSDK_OFFSET(0x16147E20)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_DECODE_OFFSET UNITYSDK_OFFSET(0x16147CE0)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x16147BB0)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16147BD0)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_PREPAREMESSAGE_OFFSET UNITYSDK_OFFSET(0x16147BE0)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x16147BC0)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16147FC0)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16147BA0)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int MessageBase_TypeDefinitionIndex = 2262;

	class MessageBase : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_header()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MessageBase_TypeDefinitionIndex)->GetStaticField(0xEA10);
		}
		::System::Int32 _type; // 0x10
		::Mono::Security::Protocol::Ntlm::NtlmFlags _flags; // 0x14

		::System::Void _ctor(::System::Int32 messageType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE__CTOR_OFFSET))(this, messageType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE__CCTOR_OFFSET))();
		}

		::Mono::Security::Protocol::Ntlm::NtlmFlags get_Flags()
		{
			return ((::Mono::Security::Protocol::Ntlm::NtlmFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Ntlm::NtlmFlags))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Int32 get_Type()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_TYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* PrepareMessage(::System::Int32 messageSize)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_PREPAREMESSAGE_OFFSET))(this, messageSize);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_DECODE_OFFSET))(this, message);
		}

		::System::Boolean CheckHeader(::Il2CppArray<::System::Byte>* message)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_CHECKHEADER_OFFSET))(this, message);
		}
	};
}
