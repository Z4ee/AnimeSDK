#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_OnLogErrorAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogErrorWithCodeAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogMessageAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogVerboseAction; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x8DC7AB0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGERROR_OFFSET UNITYSDK_OFFSET(0x8DC7950)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x8DC77F0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x8DC7690)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ERROR_1_OFFSET UNITYSDK_OFFSET(0x8DC8A00)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x8DB5F80)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_MESSAGE_OFFSET UNITYSDK_OFFSET(0x8DB53D0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x8DC7B60)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGERROR_OFFSET UNITYSDK_OFFSET(0x8DC7A00)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x8DC78A0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x8DC7740)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_VERBOSE_OFFSET UNITYSDK_OFFSET(0x8DB7F20)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC9030)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_Log_TypeDefinitionIndex = 43015;

	class SecurityTunnel_Log : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction** StaticGet_OnLogError()
		{
			return (::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_Log_TypeDefinitionIndex)->GetStaticField(0x539B0);
		}
		static ::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction** StaticGet_OnLogMessage()
		{
			return (::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_Log_TypeDefinitionIndex)->GetStaticField(0x539B8);
		}
		static ::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction** StaticGet_OnLogErrorWithCode()
		{
			return (::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_Log_TypeDefinitionIndex)->GetStaticField(0x539C0);
		}
		static ::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction** StaticGet_OnLogVerbose()
		{
			return (::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_Log_TypeDefinitionIndex)->GetStaticField(0x539C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnLogVerbose(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGVERBOSE_OFFSET))(value);
		}

		static ::System::Void remove_OnLogVerbose(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGVERBOSE_OFFSET))(value);
		}

		static ::System::Void add_OnLogMessage(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGMESSAGE_OFFSET))(value);
		}

		static ::System::Void remove_OnLogMessage(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGMESSAGE_OFFSET))(value);
		}

		static ::System::Void add_OnLogError(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGERROR_OFFSET))(value);
		}

		static ::System::Void remove_OnLogError(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGERROR_OFFSET))(value);
		}

		static ::System::Void add_OnLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGERRORWITHCODE_OFFSET))(value);
		}

		static ::System::Void remove_OnLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGERRORWITHCODE_OFFSET))(value);
		}

		static ::System::Void Verbose(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_VERBOSE_OFFSET))(message, args);
		}

		static ::System::Void Message(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_MESSAGE_OFFSET))(message, args);
		}

		static ::System::Void Error(::MiHoYo::SDK::SecurityTunnel_ErrorCode code, ::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_ErrorCode, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ERROR_OFFSET))(code, message, args);
		}

		static ::System::Void Error_1(::System::String* errorMessage, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ERROR_1_OFFSET))(errorMessage, args);
		}
	};
}
