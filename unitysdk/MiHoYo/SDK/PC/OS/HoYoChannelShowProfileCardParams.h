#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1C0DF430)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DF440)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowProfileCardParams_TypeDefinitionIndex = 20358;

	class HoYoChannelShowProfileCardParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* xuid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
