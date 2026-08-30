#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF5C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCF5D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLoginParams_TypeDefinitionIndex = 8529;

	class HoYoChannelLoginParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
