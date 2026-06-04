#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/ThirdpartyMethod.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x18443DE0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONAPPLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443DC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443DA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONFACEBOOKLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D20)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONFORGOTPASSWORDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443CE0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONGOOGLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D40)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONGUESTLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443CA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONREGISTERBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443CC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONTWITTERLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_HIDEACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x184446E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x184446D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x18443DF0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONAPPLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D10)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443DD0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443DB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONFACEBOOKLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONFORGOTPASSWORDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443CF0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONGOOGLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONGUESTLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443CB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONREGISTERBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443CD0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONTWITTERLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18443D70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SHOWACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18443F90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x18443F80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_UPDATEACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x18443E60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_UPDATEPASSWORD_OFFSET UNITYSDK_OFFSET(0x18443EF0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18444820)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_0_OFFSET UNITYSDK_OFFSET(0x18444830)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_1_OFFSET UNITYSDK_OFFSET(0x18444850)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_2_OFFSET UNITYSDK_OFFSET(0x18444870)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_3_OFFSET UNITYSDK_OFFSET(0x18444890)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_4_OFFSET UNITYSDK_OFFSET(0x18444A50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_5_OFFSET UNITYSDK_OFFSET(0x18444A70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_6_OFFSET UNITYSDK_OFFSET(0x18444A90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_7_OFFSET UNITYSDK_OFFSET(0x18444AB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_8_OFFSET UNITYSDK_OFFSET(0x18444AD0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int LoginByAccountPluginUI_TypeDefinitionIndex = 8334;

	class LoginByAccountPluginUI : public ::System::Object
	{
	public:
		// static const ::System::String* uiName; // 0x0
		::System::Action* _OnGoogleLoginBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnAppleLoginBtnClicked_k__BackingField; // 0x18
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x20
		::System::Action_1<::System::String*>* _OnForgotPasswordBtnClicked_k__BackingField; // 0x28
		::System::Action* _OnGuestLoginBtnClicked_k__BackingField; // 0x30
		::System::Action* _OnBackBtnClicked_k__BackingField; // 0x38
		::System::Action* _OnTwitterLoginBtnClicked_k__BackingField; // 0x40
		::System::Action* _OnRegisterBtnClicked_k__BackingField; // 0x48
		::System::Action* _OnFacebookLoginBtnClicked_k__BackingField; // 0x50
		::System::String* inputAccount; // 0x58
		::System::Action_2<::System::String*, ::System::String*>* _OnLoginBtnClicked_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action_2<::System::String*, ::System::String*>* get_OnLoginBtnClicked()
		{
			return ((::System::Action_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginBtnClicked(::System::Action_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONLOGINBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnRegisterBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONREGISTERBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnRegisterBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONREGISTERBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::String*>* get_OnForgotPasswordBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONFORGOTPASSWORDBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnForgotPasswordBtnClicked(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONFORGOTPASSWORDBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnAppleLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONAPPLELOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnAppleLoginBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONAPPLELOGINBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnFacebookLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONFACEBOOKLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnFacebookLoginBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONFACEBOOKLOGINBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnGoogleLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONGOOGLELOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnGoogleLoginBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONGOOGLELOGINBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnTwitterLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONTWITTERLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnTwitterLoginBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONTWITTERLOGINBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnGuestLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONGUESTLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnGuestLoginBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONGUESTLOGINBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnBackBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONBACKBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnBackBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONBACKBTNCLICKED_OFFSET))(this, a1);
		}

		::System::String* GetAccountInput()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GETACCOUNTINPUT_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_ISVISIBLE_OFFSET))(this);
		}

		::System::Void UpdateAccountInput(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_UPDATEACCOUNTINPUT_OFFSET))(this, a1);
		}

		::System::Void UpdatePassword(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_UPDATEPASSWORD_OFFSET))(this, a1);
		}

		::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAccountLoginPluginUI(::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SHOWACCOUNTLOGINPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void HideAccountLoginPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_HIDEACCOUNTLOGINPLUGINUI_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_5(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_6(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_6_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_7(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_7_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_8(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_8_OFFSET))(this, a1, a2);
		}
	};
}
