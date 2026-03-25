#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace MiHoYo::SDK::Win { class WeGameSessionTicketModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160808A0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1608E900)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__10_OFFSET UNITYSDK_OFFSET(0x16091340)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__11_OFFSET UNITYSDK_OFFSET(0x16091A80)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__15_OFFSET UNITYSDK_OFFSET(0x160934B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__16_OFFSET UNITYSDK_OFFSET(0x16093570)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1608F1F0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__4_OFFSET UNITYSDK_OFFSET(0x1608FF60)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__5_OFFSET UNITYSDK_OFFSET(0x1608FFD0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__6_OFFSET UNITYSDK_OFFSET(0x160905E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass18_0_TypeDefinitionIndex = 8023;

	class ComboManager___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__1; // 0x10
		::System::Action* __9__4; // 0x18
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__11; // 0x28
		::System::Action_1<::System::String*>* callback; // 0x30
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* __9__16; // 0x38
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__0(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__0_OFFSET))(this, responseString);
		}

		::System::Void _Login_b__1(::MiHoYo::SDK::NetworkResponseModel* comboLoginResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__1_OFFSET))(this, comboLoginResponse);
		}

		::System::Void _Login_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__4_OFFSET))(this);
		}

		::System::Void _Login_b__5(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__5_OFFSET))(this, responseModel);
		}

		::System::Void _Login_b__6(::MiHoYo::SDK::NetworkResponseModel* comboLoginResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__6_OFFSET))(this, comboLoginResponse);
		}

		::System::Void _Login_b__10(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__10_OFFSET))(this, response);
		}

		::System::Void _Login_b__11(::MiHoYo::SDK::NetworkResponseModel* comboLoginResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__11_OFFSET))(this, comboLoginResponse);
		}

		::System::Void _Login_b__15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__15_OFFSET))(this);
		}

		::System::Void _Login_b__16(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_0__LOGIN_B__16_OFFSET))(this, response);
		}
	};
}
