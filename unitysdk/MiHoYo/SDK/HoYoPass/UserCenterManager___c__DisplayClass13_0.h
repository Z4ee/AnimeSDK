#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::HoYoPass { class UserCenterManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181FCA90)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_0__OPEN_B__0_OFFSET UNITYSDK_OFFSET(0x181FE410)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_0__OPEN_B__3_OFFSET UNITYSDK_OFFSET(0x181FE500)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager___c__DisplayClass13_0_TypeDefinitionIndex = 8227;

	class UserCenterManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__3; // 0x10
		::MiHoYo::SDK::AccountModel* currentAccount; // 0x18
		::MiHoYo::SDK::HoYoPass::UserCenterManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _Open_b__0(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_0__OPEN_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _Open_b__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS13_0__OPEN_B__3_OFFSET))(this, a1);
		}
	};
}
