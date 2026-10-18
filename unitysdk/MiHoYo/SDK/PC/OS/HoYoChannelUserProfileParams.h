#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILEPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BF377C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF377D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelUserProfileParams_TypeDefinitionIndex = 8624;

	class HoYoChannelUserProfileParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* xuid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILEPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILEPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
