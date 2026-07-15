#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/AlertDescription.h"
#include "unitysdk/Mono/Security/Interface/AlertLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_INTERFACE_ALERT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B64E8B0)
#define MONO_SECURITY_INTERFACE_ALERT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B64E8A0)
#define MONO_SECURITY_INTERFACE_ALERT_INFERALERTLEVEL_OFFSET UNITYSDK_OFFSET(0x1B64E900)
#define MONO_SECURITY_INTERFACE_ALERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B64E940)
#define MONO_SECURITY_INTERFACE_ALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64E8C0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int Alert_TypeDefinitionIndex = 2276;

	class Alert : public ::System::Object
	{
	public:
		::Mono::Security::Interface::AlertLevel level; // 0x10
		::Mono::Security::Interface::AlertDescription description; // 0x11

		::System::Void _ctor(::Mono::Security::Interface::AlertDescription a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT__CTOR_OFFSET))(this, a1);
		}

		::Mono::Security::Interface::AlertLevel get_Level()
		{
			return ((::Mono::Security::Interface::AlertLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_LEVEL_OFFSET))(this);
		}

		::Mono::Security::Interface::AlertDescription get_Description()
		{
			return ((::Mono::Security::Interface::AlertDescription(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void inferAlertLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_INFERALERTLEVEL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_TOSTRING_OFFSET))(this);
		}
	};
}
