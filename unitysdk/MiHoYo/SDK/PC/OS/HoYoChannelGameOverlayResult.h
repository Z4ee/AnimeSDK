#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGAMEOVERLAYRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x194B2170)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGAMEOVERLAYRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x194B2160)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGAMEOVERLAYRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x194B21B0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGameOverlayResult_TypeDefinitionIndex = 19397;

	class HoYoChannelGameOverlayResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Boolean active; // 0x28
		::System::UInt32 appId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGAMEOVERLAYRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGAMEOVERLAYRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGAMEOVERLAYRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
