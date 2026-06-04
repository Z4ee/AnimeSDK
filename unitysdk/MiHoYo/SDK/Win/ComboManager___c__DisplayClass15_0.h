#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1849FE90)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x184AAEB0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x184AB770)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__5_OFFSET UNITYSDK_OFFSET(0x184ACD40)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__6_OFFSET UNITYSDK_OFFSET(0x184ACD70)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__7_OFFSET UNITYSDK_OFFSET(0x184ADAF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass15_0_TypeDefinitionIndex = 9066;

	class ComboManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* thirdpartyType; // 0x10
		::System::String* traceId; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x28
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* __9__7; // 0x30
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__1; // 0x38
		::System::String* authTicket; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__0(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__0_OFFSET))(this, a1);
		}

		::System::Void _Login_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__1_OFFSET))(this, a1);
		}

		::System::Void _Login_b__5(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__5_OFFSET))(this, a1);
		}

		::System::Void _Login_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__6_OFFSET))(this);
		}

		::System::Void _Login_b__7(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__7_OFFSET))(this, a1);
		}
	};
}
