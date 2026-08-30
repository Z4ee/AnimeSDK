#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxInviteReceivedExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERECEIVEDRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF4D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERECEIVEDRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCF4E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelInviteReceivedResult_TypeDefinitionIndex = 8580;

	class HoYoChannelInviteReceivedResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxInviteReceivedExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERECEIVEDRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINVITERECEIVEDRESULT_TOJSON_OFFSET))(this);
		}
	};
}
