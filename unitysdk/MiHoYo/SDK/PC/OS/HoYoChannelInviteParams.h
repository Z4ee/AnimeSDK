#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class XboxInviteParamExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITEPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1CEA74E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA74F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelInviteParams_TypeDefinitionIndex = 20729;

	class HoYoChannelInviteParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* action; // 0x18
		::MiHoYo::SDK::PC::OS::XboxInviteParamExtension* xbox; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINVITEPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINVITEPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
