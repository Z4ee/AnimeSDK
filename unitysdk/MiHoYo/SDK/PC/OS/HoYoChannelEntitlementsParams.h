#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class XboxEntitlementsParam; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1C395190)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3951A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEntitlementsParams_TypeDefinitionIndex = 20338;

	class HoYoChannelEntitlementsParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxEntitlementsParam* xbox; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
