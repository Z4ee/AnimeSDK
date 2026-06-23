#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BE59160)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE59170)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelFriendListParams_TypeDefinitionIndex = 20364;

	class HoYoChannelFriendListParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
