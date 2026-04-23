#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x175A7DC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x175A7DD0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEntitlementsParams_TypeDefinitionIndex = 7549;

	class HoYoChannelEntitlementsParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
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
