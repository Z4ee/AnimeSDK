#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxAchievementsExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1BA1DCB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BA1DCA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1DCF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAchievementsResult_TypeDefinitionIndex = 8568;

	class HoYoChannelAchievementsResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxAchievementsExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
