#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1879B520)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x1879EA80)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x1879F140)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__2_OFFSET UNITYSDK_OFFSET(0x1879F600)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__3_OFFSET UNITYSDK_OFFSET(0x1879F630)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__5_OFFSET UNITYSDK_OFFSET(0x1879F660)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__6_OFFSET UNITYSDK_OFFSET(0x1879EC50)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__7_OFFSET UNITYSDK_OFFSET(0x1879F3B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass38_0_TypeDefinitionIndex = 9302;

	class RealNameManager___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__6; // 0x10
		::System::Action_1<::System::String*>* verifyAction; // 0x18
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x20
		::MiHoYo::SDK::AccountModel* account; // 0x28
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__7; // 0x30
		::System::Action* getCaptchaAction; // 0x38
		::System::Boolean isShowRedirect; // 0x40
		::System::Boolean isShowOtherVerify; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantMail_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__0_OFFSET))(this);
		}

		::System::Void _ShowGrantMail_b__6(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__6_OFFSET))(this, a1);
		}

		::System::Void _ShowGrantMail_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__1_OFFSET))(this, a1);
		}

		::System::Void _ShowGrantMail_b__7(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__7_OFFSET))(this, a1);
		}

		::System::Void _ShowGrantMail_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__2_OFFSET))(this);
		}

		::System::Void _ShowGrantMail_b__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__3_OFFSET))(this, a1);
		}

		::System::Void _ShowGrantMail_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS38_0__SHOWGRANTMAIL_B__5_OFFSET))(this);
		}
	};
}
