#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class Alert_OnAlertDelegate; }
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D12BF0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__ONMDKORAUTHTICKETLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x15D22FE0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__ONMDKORAUTHTICKETLOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x15D25410)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__ONMDKORAUTHTICKETLOGIN_B__3_OFFSET UNITYSDK_OFFSET(0x15D24E00)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__ONMDKORAUTHTICKETLOGIN_B__4_OFFSET UNITYSDK_OFFSET(0x15D253E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass18_0_TypeDefinitionIndex = 9354;

	class ComboManager___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Alert_OnAlertDelegate* __9__1; // 0x10
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x18
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x20
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* __9__4; // 0x28
		::System::Action* __9__3; // 0x30
		::System::Action_1<::System::String*>* callback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__ONMDKORAUTHTICKETLOGIN_B__0_OFFSET))(this, a1);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__ONMDKORAUTHTICKETLOGIN_B__3_OFFSET))(this);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__4(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__ONMDKORAUTHTICKETLOGIN_B__4_OFFSET))(this, a1);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__1(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__ONMDKORAUTHTICKETLOGIN_B__1_OFFSET))(this, a1);
		}
	};
}
