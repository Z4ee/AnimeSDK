#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3D70)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS44_0__ONLOGINCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1E1B3D80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass44_0_TypeDefinitionIndex = 37572;

	class HoYoChannelInterface___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* callback; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLoginCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS44_0__ONLOGINCALLBACK_B__0_OFFSET))(this);
		}
	};
}
