#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxAchievementUpdateExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTUPDATERESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1A273650)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTUPDATERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A273660)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAchievementUpdateResult_TypeDefinitionIndex = 8569;

	class HoYoChannelAchievementUpdateResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxAchievementUpdateExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTUPDATERESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTUPDATERESULT_TOJSON_OFFSET))(this);
		}
	};
}
