#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BA271F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA27200)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelInviteResult_TypeDefinitionIndex = 8577;

	class HoYoChannelInviteResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERESULT_TOJSON_OFFSET))(this);
		}
	};
}
