#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelSteam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DF450)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS19_0__GETAUTHTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x1C0DF460)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelSteam___c__DisplayClass19_0_TypeDefinitionIndex = 20443;

	class HoYoChannelSteam___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::PC::OS::HoYoChannelSteam* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetAuthTicket_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS19_0__GETAUTHTICKET_B__0_OFFSET))(this, result);
		}
	};
}
