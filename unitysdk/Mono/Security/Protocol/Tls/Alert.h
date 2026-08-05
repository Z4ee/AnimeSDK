#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/AlertDescription.h"
#include "unitysdk/Mono/Security/Protocol/Tls/AlertLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_TLS_ALERT_GETALERTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EF5A8F0)
#define MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1EF5A7F0)
#define MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_ISCLOSENOTIFY_OFFSET UNITYSDK_OFFSET(0x1EF5A850)
#define MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_ISWARNING_OFFSET UNITYSDK_OFFSET(0x1EF5A840)
#define MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1EF5A7E0)
#define MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1EF5A800)
#define MONO_SECURITY_PROTOCOL_TLS_ALERT_INFERALERTLEVEL_OFFSET UNITYSDK_OFFSET(0x1EF5A8B0)
#define MONO_SECURITY_PROTOCOL_TLS_ALERT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF5A8E0)
#define MONO_SECURITY_PROTOCOL_TLS_ALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5A870)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int Alert_TypeDefinitionIndex = 2345;

	class Alert : public ::System::Object
	{
	public:
		::Mono::Security::Protocol::Tls::AlertDescription description; // 0x10
		::Mono::Security::Protocol::Tls::AlertLevel level; // 0x11

		::System::Void _ctor(::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT__CTOR_OFFSET))(this, description);
		}

		::System::Void _ctor_1(::Mono::Security::Protocol::Tls::AlertLevel level, ::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertLevel, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT__CTOR_1_OFFSET))(this, level, description);
		}

		::Mono::Security::Protocol::Tls::AlertLevel get_Level()
		{
			return ((::Mono::Security::Protocol::Tls::AlertLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_LEVEL_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::AlertDescription get_Description()
		{
			return ((::Mono::Security::Protocol::Tls::AlertDescription(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_MESSAGE_OFFSET))(this);
		}

		::System::Boolean get_IsWarning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_ISWARNING_OFFSET))(this);
		}

		::System::Boolean get_IsCloseNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT_GET_ISCLOSENOTIFY_OFFSET))(this);
		}

		static ::Mono::Security::Protocol::Tls::AlertLevel inferAlertLevel(::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::Mono::Security::Protocol::Tls::AlertLevel(*)(::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT_INFERALERTLEVEL_OFFSET))(description);
		}

		static ::System::String* GetAlertMessage(::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::String*(*)(::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_ALERT_GETALERTMESSAGE_OFFSET))(description);
		}
	};
}
