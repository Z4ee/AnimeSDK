#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXLOGINEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE11F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxLoginExtension_TypeDefinitionIndex = 8601;

	class XboxLoginExtension : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::String* gamertag; // 0x18
		::System::String* sandboxId; // 0x20
		::System::Boolean isStoreUser; // 0x28
		::System::String* countryCode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXLOGINEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
