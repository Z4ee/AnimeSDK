#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXAUTHSTATUSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF17830)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxAuthStatusExtension_TypeDefinitionIndex = 8664;

	class XboxAuthStatusExtension : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXAUTHSTATUSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
