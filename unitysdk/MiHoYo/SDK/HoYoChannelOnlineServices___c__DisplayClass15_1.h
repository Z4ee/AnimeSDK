#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckPermissionResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS15_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET UNITYSDK_OFFSET(0x1CE7CF50)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7CF40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelOnlineServices___c__DisplayClass15_1_TypeDefinitionIndex = 36927;

	class HoYoChannelOnlineServices___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS15_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET))(this);
		}
	};
}
