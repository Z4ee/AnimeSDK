#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET UNITYSDK_OFFSET(0x8D12490)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8D117F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass57_0_TypeDefinitionIndex = 43126;

	class HoYoChannelInterface___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET))(this);
		}
	};
}
