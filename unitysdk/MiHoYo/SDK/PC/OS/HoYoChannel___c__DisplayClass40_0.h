#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteReceivedResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DC430)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS40_0__REGISTERINVITERECEIVEDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1B9DC440)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass40_0_TypeDefinitionIndex = 20280;

	class HoYoChannel___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterInviteReceivedCallback_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS40_0__REGISTERINVITERECEIVEDCALLBACK_B__0_OFFSET))(this, result);
		}
	};
}
