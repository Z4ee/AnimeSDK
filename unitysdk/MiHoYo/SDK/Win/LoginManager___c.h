#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE12550)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE12590)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__ONLOGOUT_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BE125A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAPPLE_B__81_0_OFFSET UNITYSDK_OFFSET(0x1BE13200)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAUTHTICKET_B__77_2_OFFSET UNITYSDK_OFFSET(0x1BE12E50)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYFACEBOOK_B__79_0_OFFSET UNITYSDK_OFFSET(0x1BE12F60)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYGOOGLE_B__82_0_OFFSET UNITYSDK_OFFSET(0x1BE13350)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYTWITTER_B__80_0_OFFSET UNITYSDK_OFFSET(0x1BE130B0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__96_0_OFFSET UNITYSDK_OFFSET(0x1BE134A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_3_OFFSET UNITYSDK_OFFSET(0x1BE12B10)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_4_OFFSET UNITYSDK_OFFSET(0x1BE12CB0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_4_OFFSET UNITYSDK_OFFSET(0x1BE12810)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_5_OFFSET UNITYSDK_OFFSET(0x1BE12890)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_11_OFFSET UNITYSDK_OFFSET(0x1BE12910)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_12_OFFSET UNITYSDK_OFFSET(0x1BE12990)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_16_OFFSET UNITYSDK_OFFSET(0x1BE12A10)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_17_OFFSET UNITYSDK_OFFSET(0x1BE12A90)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_4_OFFSET UNITYSDK_OFFSET(0x1BE12610)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_5_OFFSET UNITYSDK_OFFSET(0x1BE12690)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_3_OFFSET UNITYSDK_OFFSET(0x1BE12710)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_4_OFFSET UNITYSDK_OFFSET(0x1BE12790)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 21540;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::AccountModel*>** StaticGet___9__66_3()
		{
			return (::System::Action_1<::MiHoYo::SDK::AccountModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9F70);
		}
		static ::System::Action_1<::MiHoYo::SDK::AccountModel*>** StaticGet___9__66_4()
		{
			return (::System::Action_1<::MiHoYo::SDK::AccountModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9F78);
		}
		static ::System::Action** StaticGet___9__82_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9F80);
		}
		static ::System::Action** StaticGet___9__80_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9F88);
		}
		static ::System::Action** StaticGet___9__62_12()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9F90);
		}
		static ::System::Action** StaticGet___9__33_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9F98);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__60_5()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FA0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FA8);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__32_5()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FB0);
		}
		static ::System::Action** StaticGet___9__79_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FB8);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__60_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FC0);
		}
		static ::System::Action** StaticGet___9__33_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FC8);
		}
		static ::System::Action** StaticGet___9__62_11()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FD0);
		}
		static ::System::Action** StaticGet___9__62_16()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FD8);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__96_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FE0);
		}
		static ::System::Action** StaticGet___9__62_17()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FE8);
		}
		static ::System::Action** StaticGet___9__77_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FF0);
		}
		static ::System::Action** StaticGet___9__81_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9FF8);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__32_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0xA000);
		}
		static ::MiHoYo::SDK::Win::LoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::LoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0xA008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnLogout_b__26_0(::MiHoYo::SDK::NetworkResponseModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__ONLOGOUT_B__26_0_OFFSET))(this, model);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_5(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_5_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessageView_b__33_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_3_OFFSET))(this);
		}

		::System::Void _ShowPhoneMessageView_b__33_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_4_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginPluginUI_b__60_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__60_5(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_5_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginView_b__62_11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_11_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_12_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_16()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_16_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_17()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_17_OFFSET))(this);
		}

		::System::Void _ShowAccountListView_b__66_3(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_3_OFFSET))(this, account);
		}

		::System::Void _ShowAccountListView_b__66_4(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_4_OFFSET))(this, account);
		}

		::System::Void _RequestLoginByAuthTicket_b__77_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAUTHTICKET_B__77_2_OFFSET))(this);
		}

		::System::Void _RequestLoginByFacebook_b__79_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYFACEBOOK_B__79_0_OFFSET))(this);
		}

		::System::Void _RequestLoginByTwitter_b__80_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYTWITTER_B__80_0_OFFSET))(this);
		}

		::System::Void _RequestLoginByApple_b__81_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAPPLE_B__81_0_OFFSET))(this);
		}

		::System::Void _RequestLoginByGoogle_b__82_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYGOOGLE_B__82_0_OFFSET))(this);
		}

		::System::Void _RequestWebViewRenderMethodAbTestConfig_b__96_0(::MiHoYo::SDK::NetworkResponseModel* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__96_0_OFFSET))(this, responseModel);
		}
	};
}
