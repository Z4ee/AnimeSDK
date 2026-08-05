#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E80C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1D1EAA00)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1D1E80D0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__2_OFFSET UNITYSDK_OFFSET(0x1D1E8B90)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__6_OFFSET UNITYSDK_OFFSET(0x1D1EAA90)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__7_OFFSET UNITYSDK_OFFSET(0x1D1EAAC0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__8_OFFSET UNITYSDK_OFFSET(0x1D1EB6A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass15_0_TypeDefinitionIndex = 21504;

	class ComboManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* authTicket; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* __9__8; // 0x20
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x28
		::System::String* thirdpartyType; // 0x30
		::System::String* traceId; // 0x38
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__1(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__1_OFFSET))(this, response);
		}

		::System::Void _Login_b__2(::MiHoYo::SDK::NetworkResponseModel* comboLoginResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__2_OFFSET))(this, comboLoginResponse);
		}

		::System::Void _Login_b__0(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__0_OFFSET))(this, ret, msg, account);
		}

		::System::Void _Login_b__6(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__6_OFFSET))(this, response);
		}

		::System::Void _Login_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__7_OFFSET))(this);
		}

		::System::Void _Login_b__8(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__8_OFFSET))(this, response);
		}
	};
}
