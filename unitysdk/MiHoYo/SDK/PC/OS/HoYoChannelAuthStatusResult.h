#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHSTATUSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD6DA0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAuthStatusResult_TypeDefinitionIndex = 20756;

	class HoYoChannelAuthStatusResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Int32 status; // 0x30
		::System::String* xuid; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHSTATUSRESULT__CTOR_OFFSET))(this);
		}
	};
}
