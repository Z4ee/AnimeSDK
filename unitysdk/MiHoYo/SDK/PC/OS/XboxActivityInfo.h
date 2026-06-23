#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXACTIVITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC94FC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxActivityInfo_TypeDefinitionIndex = 20430;

	class XboxActivityInfo : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::String* connectionString; // 0x18
		::System::Int32 currentPlayers; // 0x20
		::System::Int32 maxPlayers; // 0x24
		::System::Int32 joinRestriction; // 0x28
		::System::Int32 platform; // 0x2C
		::System::String* groupId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXACTIVITYINFO__CTOR_OFFSET))(this);
		}
	};
}
