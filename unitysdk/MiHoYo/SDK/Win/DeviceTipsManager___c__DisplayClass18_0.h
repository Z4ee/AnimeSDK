#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class DeviceTipsManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D32FC0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__DISPLAYCLASS18_0__REQUESTNEWDEVICELIST_B__0_OFFSET UNITYSDK_OFFSET(0x15D347E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DeviceTipsManager___c__DisplayClass18_0_TypeDefinitionIndex = 9273;

	class DeviceTipsManager___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::DeviceTipsManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestNewDeviceList_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__DISPLAYCLASS18_0__REQUESTNEWDEVICELIST_B__0_OFFSET))(this, a1);
		}
	};
}
