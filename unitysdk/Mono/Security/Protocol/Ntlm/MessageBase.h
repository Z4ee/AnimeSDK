#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/NtlmFlags.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_CHECKHEADER_OFFSET UNITYSDK_OFFSET(0x1852E4B0)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_DECODE_OFFSET UNITYSDK_OFFSET(0x1852E370)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1852E270)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1852E290)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_PREPAREMESSAGE_OFFSET UNITYSDK_OFFSET(0x1852E2A0)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1852E280)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852E630)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1852E260)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int MessageBase_TypeDefinitionIndex = 2263;

	class MessageBase : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_header()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MessageBase_TypeDefinitionIndex)->GetStaticField(0x1AD40);
		}
		::System::Int32 _type; // 0x10
		::Mono::Security::Protocol::Ntlm::NtlmFlags _flags; // 0x14

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE__CCTOR_OFFSET))();
		}

		::Mono::Security::Protocol::Ntlm::NtlmFlags get_Flags()
		{
			return ((::Mono::Security::Protocol::Ntlm::NtlmFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::Mono::Security::Protocol::Ntlm::NtlmFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Ntlm::NtlmFlags))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::Int32 get_Type()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_TYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* PrepareMessage(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_PREPAREMESSAGE_OFFSET))(this, a1);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_DECODE_OFFSET))(this, a1);
		}

		::System::Boolean CheckHeader(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_CHECKHEADER_OFFSET))(this, a1);
		}
	};
}
