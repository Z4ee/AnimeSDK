#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DB63E00)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB63690)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DB63620)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1DB639B0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x1DB63930)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_LM_OFFSET UNITYSDK_OFFSET(0x1DB63940)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_NT_OFFSET UNITYSDK_OFFSET(0x1DB63D90)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1DB63790)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_PASSWORDTOKEY_OFFSET UNITYSDK_OFFSET(0x1DB637A0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_PREPAREDESKEY_OFFSET UNITYSDK_OFFSET(0x1DB63E70)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x1DB63490)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1DB62EA0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB641B0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB62E20)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB62DC0)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int ChallengeResponse_TypeDefinitionIndex = 2415;

	class ChallengeResponse : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_nullEncMagic()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeResponse_TypeDefinitionIndex)->GetStaticField(0x2340);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_magic()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeResponse_TypeDefinitionIndex)->GetStaticField(0x2348);
		}
		::Il2CppArray<::System::Byte>* _challenge; // 0x10
		::Il2CppArray<::System::Byte>* _ntpwd; // 0x18
		::Il2CppArray<::System::Byte>* _lmpwd; // 0x20
		::System::Boolean _disposed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* password, ::Il2CppArray<::System::Byte>* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE__CTOR_1_OFFSET))(this, password, challenge);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_FINALIZE_OFFSET))(this);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_SET_PASSWORD_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Challenge()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_CHALLENGE_OFFSET))(this);
		}

		::System::Void set_Challenge(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_SET_CHALLENGE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_LM()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_LM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_NT()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_NT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::Il2CppArray<::System::Byte>* GetResponse(::Il2CppArray<::System::Byte>* pwd)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GETRESPONSE_OFFSET))(this, pwd);
		}

		::Il2CppArray<::System::Byte>* PrepareDESKey(::Il2CppArray<::System::Byte>* key56bits, ::System::Int32 position)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_PREPAREDESKEY_OFFSET))(this, key56bits, position);
		}

		::Il2CppArray<::System::Byte>* PasswordToKey(::System::String* password, ::System::Int32 position)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_PASSWORDTOKEY_OFFSET))(this, password, position);
		}
	};
}
