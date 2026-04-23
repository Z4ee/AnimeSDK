#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET UNITYSDK_OFFSET(0x8D12550)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8D11800)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass57_1_TypeDefinitionIndex = 43127;

	class HoYoChannelInterface___c__DisplayClass57_1 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_1__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET))(this);
		}
	};
}
