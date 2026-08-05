#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_5__CLEANUPTIMEDOUTCALLBACKS_B__5_OFFSET UNITYSDK_OFFSET(0x1D39CE20)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39CE10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass68_5_TypeDefinitionIndex = 37583;

	class HoYoChannelInterface___c__DisplayClass68_5 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_5__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_5__CLEANUPTIMEDOUTCALLBACKS_B__5_OFFSET))(this);
		}
	};
}
