#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDB3A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS26_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1BDDB3B0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox___c__DisplayClass26_0_TypeDefinitionIndex = 20739;

	class HoYoChannelXbox___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::Boolean forceRefresh; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* loginResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS26_0__LOGIN_B__0_OFFSET))(this, loginResult);
		}
	};
}
