#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/AlertDescription.h"
#include "unitysdk/Mono/Security/Interface/AlertLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_INTERFACE_ALERT_GETALERTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5FF820)
#define MONO_SECURITY_INTERFACE_ALERT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F5FF670)
#define MONO_SECURITY_INTERFACE_ALERT_GET_ISCLOSENOTIFY_OFFSET UNITYSDK_OFFSET(0x1F5FF6D0)
#define MONO_SECURITY_INTERFACE_ALERT_GET_ISWARNING_OFFSET UNITYSDK_OFFSET(0x1F5FF6C0)
#define MONO_SECURITY_INTERFACE_ALERT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1F5FF660)
#define MONO_SECURITY_INTERFACE_ALERT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5FF680)
#define MONO_SECURITY_INTERFACE_ALERT_INFERALERTLEVEL_OFFSET UNITYSDK_OFFSET(0x1F5FF730)
#define MONO_SECURITY_INTERFACE_ALERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5FF780)
#define MONO_SECURITY_INTERFACE_ALERT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5FF770)
#define MONO_SECURITY_INTERFACE_ALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5FF6F0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int Alert_TypeDefinitionIndex = 2426;

	class Alert : public ::System::Object
	{
	public:
		::Mono::Security::Interface::AlertLevel level; // 0x10
		::Mono::Security::Interface::AlertDescription description; // 0x11

		::System::Void _ctor(::Mono::Security::Interface::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT__CTOR_OFFSET))(this, description);
		}

		::System::Void _ctor_1(::Mono::Security::Interface::AlertLevel level, ::Mono::Security::Interface::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::AlertLevel, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT__CTOR_1_OFFSET))(this, level, description);
		}

		::Mono::Security::Interface::AlertLevel get_Level()
		{
			return ((::Mono::Security::Interface::AlertLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_LEVEL_OFFSET))(this);
		}

		::Mono::Security::Interface::AlertDescription get_Description()
		{
			return ((::Mono::Security::Interface::AlertDescription(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_MESSAGE_OFFSET))(this);
		}

		::System::Boolean get_IsWarning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_ISWARNING_OFFSET))(this);
		}

		::System::Boolean get_IsCloseNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_ISCLOSENOTIFY_OFFSET))(this);
		}

		::System::Void inferAlertLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_INFERALERTLEVEL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_TOSTRING_OFFSET))(this);
		}

		static ::System::String* GetAlertMessage(::Mono::Security::Interface::AlertDescription description)
		{
			return ((::System::String*(*)(::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GETALERTMESSAGE_OFFSET))(description);
		}
	};
}
