#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class XboxLeaderboardParamExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1DD47D30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD47D40)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLeaderboardParams_TypeDefinitionIndex = 20725;

	class HoYoChannelLeaderboardParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxLeaderboardParamExtension* xbox; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
