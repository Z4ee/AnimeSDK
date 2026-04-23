#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMEPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x175A44F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x175A4500)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelConsumeParams_TypeDefinitionIndex = 7550;

	class HoYoChannelConsumeParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* purchaseToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMEPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCONSUMEPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
