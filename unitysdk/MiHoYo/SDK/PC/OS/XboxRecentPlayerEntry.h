#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXRECENTPLAYERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF47170)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxRecentPlayerEntry_TypeDefinitionIndex = 20780;

	class XboxRecentPlayerEntry : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::Int32 encounterType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXRECENTPLAYERENTRY__CTOR_OFFSET))(this);
		}
	};
}
