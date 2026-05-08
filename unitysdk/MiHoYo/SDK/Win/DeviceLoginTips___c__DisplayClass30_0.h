#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class DeviceLoginTips; }
namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WIN_DEVICELOGINTIPS___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197F7C60)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS___C__DISPLAYCLASS30_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x197F7C70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DeviceLoginTips___c__DisplayClass30_0_TypeDefinitionIndex = 20092;

	class DeviceLoginTips___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::DeviceLoginTips* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::DeviceLoginTips*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS___C__DISPLAYCLASS30_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
