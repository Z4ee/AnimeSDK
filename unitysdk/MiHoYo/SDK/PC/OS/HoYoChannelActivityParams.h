#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class XboxActivityParamExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B6C9550)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C9560)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelActivityParams_TypeDefinitionIndex = 20380;

	class HoYoChannelActivityParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* action; // 0x18
		::MiHoYo::SDK::PC::OS::XboxActivityParamExtension* xbox; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
