#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_STEAMLOGINEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B56180)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int SteamLoginExtension_TypeDefinitionIndex = 19394;

	class SteamLoginExtension : public ::System::Object
	{
	public:
		::System::String* Id; // 0x10
		::System::String* nickName; // 0x18
		::System::Boolean overlayEnabled; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMLOGINEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
