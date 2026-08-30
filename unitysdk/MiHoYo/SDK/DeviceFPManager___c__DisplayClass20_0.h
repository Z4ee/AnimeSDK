#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class DeviceFPManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C93D0)
#define MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xB1CBDE0)
#define MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xB1CC220)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DeviceFPManager___c__DisplayClass20_0_TypeDefinitionIndex = 46735;

	class DeviceFPManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::DeviceFPManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnGetDeviceFP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _Refresh_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__REFRESH_B__0_OFFSET))(this, a1);
		}

		::System::Void _Refresh_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__REFRESH_B__1_OFFSET))(this, a1);
		}
	};
}
