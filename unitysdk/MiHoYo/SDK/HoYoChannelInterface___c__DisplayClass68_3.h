#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_3__CLEANUPTIMEDOUTCALLBACKS_B__3_OFFSET UNITYSDK_OFFSET(0x1B7C5A70)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C5A60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass68_3_TypeDefinitionIndex = 36920;

	class HoYoChannelInterface___c__DisplayClass68_3 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_3__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_3__CLEANUPTIMEDOUTCALLBACKS_B__3_OFFSET))(this);
		}
	};
}
