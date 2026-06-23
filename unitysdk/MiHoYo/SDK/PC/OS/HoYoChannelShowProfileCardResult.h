#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1BBCBC10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BBCBC00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCBC50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowProfileCardResult_TypeDefinitionIndex = 20359;

	class HoYoChannelShowProfileCardResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWPROFILECARDRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
