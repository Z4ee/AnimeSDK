#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/NtlmAuthLevel.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Ntlm { class Type2Message; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_LM_OFFSET UNITYSDK_OFFSET(0x17771360)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLMV2_OFFSET UNITYSDK_OFFSET(0x17772290)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLMV2_SESSION_OFFSET UNITYSDK_OFFSET(0x17772010)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLM_OFFSET UNITYSDK_OFFSET(0x17771FA0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLM_PASSWORD_OFFSET UNITYSDK_OFFSET(0x17771E60)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_OFFSET UNITYSDK_OFFSET(0x17772DA0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x17771A30)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_PASSWORDTOKEY_OFFSET UNITYSDK_OFFSET(0x17771800)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_PREPAREDESKEY_OFFSET UNITYSDK_OFFSET(0x17773440)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17773760)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int ChallengeResponse2_TypeDefinitionIndex = 2262;

	class ChallengeResponse2 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_nullEncMagic()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeResponse2_TypeDefinitionIndex)->GetStaticField(0x11260);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_magic()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeResponse2_TypeDefinitionIndex)->GetStaticField(0x11268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* Compute_LM(::System::String* password, ::Il2CppArray<::System::Byte>* challenge)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_LM_OFFSET))(password, challenge);
		}

		static ::Il2CppArray<::System::Byte>* Compute_NTLM_Password(::System::String* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLM_PASSWORD_OFFSET))(password);
		}

		static ::Il2CppArray<::System::Byte>* Compute_NTLM(::System::String* password, ::Il2CppArray<::System::Byte>* challenge)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLM_OFFSET))(password, challenge);
		}

		static ::System::Void Compute_NTLMv2_Session(::System::String* password, ::Il2CppArray<::System::Byte>* challenge, ::Il2CppArray<::System::Byte>*& lm, ::Il2CppArray<::System::Byte>*& ntlm)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLMV2_SESSION_OFFSET))(password, challenge, lm, ntlm);
		}

		static ::Il2CppArray<::System::Byte>* Compute_NTLMv2(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::System::String* username, ::System::String* password, ::System::String* domain)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLMV2_OFFSET))(type2, username, password, domain);
		}

		static ::System::Void Compute(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel level, ::System::String* username, ::System::String* password, ::System::String* domain, ::Il2CppArray<::System::Byte>*& lm, ::Il2CppArray<::System::Byte>*& ntlm)
		{
			return ((::System::Void(*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_OFFSET))(type2, level, username, password, domain, lm, ntlm);
		}

		static ::Il2CppArray<::System::Byte>* GetResponse(::Il2CppArray<::System::Byte>* challenge, ::Il2CppArray<::System::Byte>* pwd)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_GETRESPONSE_OFFSET))(challenge, pwd);
		}

		static ::Il2CppArray<::System::Byte>* PrepareDESKey(::Il2CppArray<::System::Byte>* key56bits, ::System::Int32 position)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_PREPAREDESKEY_OFFSET))(key56bits, position);
		}

		static ::Il2CppArray<::System::Byte>* PasswordToKey(::System::String* password, ::System::Int32 position)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_PASSWORDTOKEY_OFFSET))(password, position);
		}
	};
}
