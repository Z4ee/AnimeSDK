#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class GoogleCheckoutParam; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BA8B320)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8B330)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelCheckoutParams_TypeDefinitionIndex = 20337;

	class HoYoChannelCheckoutParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* offerId; // 0x18
		::MiHoYo::SDK::PC::OS::GoogleCheckoutParam* google; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
