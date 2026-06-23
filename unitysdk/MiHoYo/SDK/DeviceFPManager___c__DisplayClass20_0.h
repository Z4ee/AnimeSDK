#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class DeviceFPManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEDBB0)
#define MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x1ADEDBC0)
#define MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0x1ADEDE10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DeviceFPManager___c__DisplayClass20_0_TypeDefinitionIndex = 36664;

	class DeviceFPManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::DeviceFPManager* __4__this; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnGetDeviceFP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _Refresh_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__REFRESH_B__0_OFFSET))(this, response);
		}

		::System::Void _Refresh_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER___C__DISPLAYCLASS20_0__REFRESH_B__1_OFFSET))(this, response);
		}
	};
}
