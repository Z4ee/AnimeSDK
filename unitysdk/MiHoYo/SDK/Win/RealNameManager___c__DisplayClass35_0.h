#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182B8570)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__0_OFFSET UNITYSDK_OFFSET(0x182BB580)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__1_OFFSET UNITYSDK_OFFSET(0x182BBC70)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__2_OFFSET UNITYSDK_OFFSET(0x182BC1A0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__3_OFFSET UNITYSDK_OFFSET(0x182BC1D0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__5_OFFSET UNITYSDK_OFFSET(0x182BC200)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__6_OFFSET UNITYSDK_OFFSET(0x182BB710)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__7_OFFSET UNITYSDK_OFFSET(0x182BBEE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass35_0_TypeDefinitionIndex = 9014;

	class RealNameManager___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__6; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__7; // 0x18
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x20
		::System::Action* getCaptchaAction; // 0x28
		::MiHoYo::SDK::AccountModel* account; // 0x30
		::System::Action_1<::System::String*>* verifyAction; // 0x38
		::System::Boolean isShowOtherVerify; // 0x40
		::System::Boolean isShowRedirect; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhone_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__0_OFFSET))(this);
		}

		::System::Void _ShowGrantPhone_b__6(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__6_OFFSET))(this, a1);
		}

		::System::Void _ShowGrantPhone_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__1_OFFSET))(this, a1);
		}

		::System::Void _ShowGrantPhone_b__7(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__7_OFFSET))(this, a1);
		}

		::System::Void _ShowGrantPhone_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__2_OFFSET))(this);
		}

		::System::Void _ShowGrantPhone_b__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__3_OFFSET))(this, a1);
		}

		::System::Void _ShowGrantPhone_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS35_0__SHOWGRANTPHONE_B__5_OFFSET))(this);
		}
	};
}
