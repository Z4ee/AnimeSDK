#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1A273850)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A267F10)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelBlockListParams_TypeDefinitionIndex = 8561;

	class HoYoChannelBlockListParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
