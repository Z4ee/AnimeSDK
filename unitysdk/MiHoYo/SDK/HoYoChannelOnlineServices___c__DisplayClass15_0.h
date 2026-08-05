#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS15_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET UNITYSDK_OFFSET(0x1E1B3FF0)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3FE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelOnlineServices___c__DisplayClass15_0_TypeDefinitionIndex = 37587;

	class HoYoChannelOnlineServices___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS15_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET))(this);
		}
	};
}
