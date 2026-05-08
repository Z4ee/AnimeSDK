#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class UserCenterManager___c__DisplayClass13_0; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1999CD20)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_1__OPEN_B__1_OFFSET UNITYSDK_OFFSET(0x1999CD30)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_1__OPEN_B__2_OFFSET UNITYSDK_OFFSET(0x1999D350)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager___c__DisplayClass13_1_TypeDefinitionIndex = 19140;

	class UserCenterManager___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::System::String* cookieToken; // 0x10
		::MiHoYo::SDK::HoYoPass::UserCenterManager___c__DisplayClass13_0* CS___8__locals1; // 0x18
		::System::Action_1<::MiHoYo::SDK::Web*>* __9__2; // 0x20
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Void _Open_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_1__OPEN_B__1_OFFSET))(this);
		}

		::System::Void _Open_b__2(::MiHoYo::SDK::Web* webpage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_1__OPEN_B__2_OFFSET))(this, webpage);
		}
	};
}
