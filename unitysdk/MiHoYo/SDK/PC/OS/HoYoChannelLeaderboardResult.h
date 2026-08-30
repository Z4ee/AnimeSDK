#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxLeaderboardExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF560)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF550)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCF5A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLeaderboardResult_TypeDefinitionIndex = 8573;

	class HoYoChannelLeaderboardResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxLeaderboardExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
