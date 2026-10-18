#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BF05BC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF05BD0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelInviteResult_TypeDefinitionIndex = 8638;

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
