#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0FB70)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS43_0__ONCHECKOUTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x8D122B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass43_0_TypeDefinitionIndex = 43123;

	class HoYoChannelInterface___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>* callback; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCheckoutCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS43_0__ONCHECKOUTCALLBACK_B__0_OFFSET))(this);
		}
	};
}
