#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMERESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x175A4520)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMERESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x175A4510)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x175A4560)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelConsumeResult_TypeDefinitionIndex = 7560;

	class HoYoChannelConsumeResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMERESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMERESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMERESULT_FROMJSON_OFFSET))(json);
		}
	};
}
