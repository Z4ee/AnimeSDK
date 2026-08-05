#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B41E0)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS8_0__ONRESOLVEPRIVILEGECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1E1B41F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelOnlineServices___c__DisplayClass8_0_TypeDefinitionIndex = 37585;

	class HoYoChannelOnlineServices___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnResolvePrivilegeCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS8_0__ONRESOLVEPRIVILEGECALLBACK_B__0_OFFSET))(this);
		}
	};
}
