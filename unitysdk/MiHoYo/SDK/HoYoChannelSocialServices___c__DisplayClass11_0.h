#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B42B0)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS11_0__ONBLOCKLISTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1E1B42C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSocialServices___c__DisplayClass11_0_TypeDefinitionIndex = 37597;

	class HoYoChannelSocialServices___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>* callback; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBlockListCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS11_0__ONBLOCKLISTCALLBACK_B__0_OFFSET))(this);
		}
	};
}
