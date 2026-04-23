#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_3__CLEANUPTIMEDOUTCALLBACKS_B__3_OFFSET UNITYSDK_OFFSET(0x8D126D0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_3__CTOR_OFFSET UNITYSDK_OFFSET(0x8D11820)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass57_3_TypeDefinitionIndex = 43129;

	class HoYoChannelInterface___c__DisplayClass57_3 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_3__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_3__CLEANUPTIMEDOUTCALLBACKS_B__3_OFFSET))(this);
		}
	};
}
