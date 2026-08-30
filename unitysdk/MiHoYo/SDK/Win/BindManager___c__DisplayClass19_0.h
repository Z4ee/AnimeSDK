#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EB400)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x1B7F41B0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x1B7F4260)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__2_OFFSET UNITYSDK_OFFSET(0x1B7F4390)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__3_OFFSET UNITYSDK_OFFSET(0x1B7F4610)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__4_OFFSET UNITYSDK_OFFSET(0x1B7F4430)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__5_OFFSET UNITYSDK_OFFSET(0x1B7F4900)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass19_0_TypeDefinitionIndex = 9324;

	class BindManager___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userData; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__5; // 0x18
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__4; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowVerifyMail_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__0_OFFSET))(this);
		}

		::System::Void _ShowVerifyMail_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__1_OFFSET))(this);
		}

		::System::Void _ShowVerifyMail_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__2_OFFSET))(this);
		}

		::System::Void _ShowVerifyMail_b__4(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__4_OFFSET))(this, a1);
		}

		::System::Void _ShowVerifyMail_b__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__3_OFFSET))(this, a1);
		}

		::System::Void _ShowVerifyMail_b__5(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS19_0__SHOWVERIFYMAIL_B__5_OFFSET))(this, a1);
		}
	};
}
