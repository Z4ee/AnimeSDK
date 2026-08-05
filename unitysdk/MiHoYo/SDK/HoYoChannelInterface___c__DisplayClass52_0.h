#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF822C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS52_0__ONENTITLEMENTSCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1DF822D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass52_0_TypeDefinitionIndex = 37576;

	class HoYoChannelInterface___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEntitlementsCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS52_0__ONENTITLEMENTSCALLBACK_B__0_OFFSET))(this);
		}
	};
}
