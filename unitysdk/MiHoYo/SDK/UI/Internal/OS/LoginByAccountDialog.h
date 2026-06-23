#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/ThirdpartyMethod.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x1B538420)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONAPPLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538340)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B5383E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B5383C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONFACEBOOKLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538360)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONFORGOTPASSWORDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538320)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONGOOGLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538380)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONGUESTLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538400)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B5382E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONREGISTERBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538300)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONTWITTERLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B5383A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B538720)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B538790)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONAPPLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538350)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B5383F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B5383D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONFACEBOOKLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538370)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONFORGOTPASSWORDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538330)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONGOOGLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538390)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONGUESTLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538410)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B5382F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONREGISTERBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B538310)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONTWITTERLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B5383B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B538560)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_UPDATEACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x1B538460)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_UPDATEPASSWORD_OFFSET UNITYSDK_OFFSET(0x1B5384E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B538890)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG__SHOW_B__43_0_OFFSET UNITYSDK_OFFSET(0x1B5388A0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int LoginByAccountDialog_TypeDefinitionIndex = 20191;

	class LoginByAccountDialog : public ::System::Object
	{
	public:
		::System::Action* _OnFacebookLoginBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x18
		::System::Action_1<::System::String*>* _OnForgotPasswordBtnClicked_k__BackingField; // 0x20
		::System::Action* _OnRegisterBtnClicked_k__BackingField; // 0x28
		::System::Action* _OnGoogleLoginBtnClicked_k__BackingField; // 0x30
		::System::Action_2<::System::String*, ::System::String*>* _OnLoginBtnClicked_k__BackingField; // 0x38
		::System::Action* _OnGuestLoginBtnClicked_k__BackingField; // 0x40
		::System::Action* _OnTwitterLoginBtnClicked_k__BackingField; // 0x48
		::System::Action* _OnBackBtnClicked_k__BackingField; // 0x50
		::System::Action* _OnAppleLoginBtnClicked_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_2<::System::String*, ::System::String*>* get_OnLoginBtnClicked()
		{
			return ((::System::Action_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginBtnClicked(::System::Action_2<::System::String*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnRegisterBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONREGISTERBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnRegisterBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONREGISTERBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnForgotPasswordBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONFORGOTPASSWORDBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnForgotPasswordBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONFORGOTPASSWORDBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnAppleLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONAPPLELOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnAppleLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONAPPLELOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnFacebookLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONFACEBOOKLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnFacebookLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONFACEBOOKLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnGoogleLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONGOOGLELOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnGoogleLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONGOOGLELOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnTwitterLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONTWITTERLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnTwitterLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONTWITTERLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnBackBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONBACKBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnBackBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONBACKBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnGuestLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GET_ONGUESTLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnGuestLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SET_ONGUESTLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::String* GetAccountInput()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_GETACCOUNTINPUT_OFFSET))(this);
		}

		::System::Void UpdateAccountInput(::System::String* accountName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_UPDATEACCOUNTINPUT_OFFSET))(this, accountName);
		}

		::System::Void UpdatePassword(::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_UPDATEPASSWORD_OFFSET))(this, password);
		}

		::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>* channels, ::System::Boolean enableBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_SHOW_OFFSET))(this, channels, enableBack);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_HIDE_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG_ISVISIBLE_OFFSET))(this);
		}

		::System::Void _Show_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNTDIALOG__SHOW_B__43_0_OFFSET))(this);
		}
	};
}
