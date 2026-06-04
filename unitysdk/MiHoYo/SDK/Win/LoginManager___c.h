#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184FB910)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184FB950)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__ONLOGOUT_B__26_0_OFFSET UNITYSDK_OFFSET(0x184FB960)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAPPLE_B__81_0_OFFSET UNITYSDK_OFFSET(0x184FC2D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAUTHTICKET_B__77_2_OFFSET UNITYSDK_OFFSET(0x184FBFA0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYFACEBOOK_B__79_0_OFFSET UNITYSDK_OFFSET(0x184FC0B0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYGOOGLE_B__82_0_OFFSET UNITYSDK_OFFSET(0x184FC3E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYTWITTER_B__80_0_OFFSET UNITYSDK_OFFSET(0x184FC1C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__96_0_OFFSET UNITYSDK_OFFSET(0x184FC4F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_3_OFFSET UNITYSDK_OFFSET(0x184FBD40)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_4_OFFSET UNITYSDK_OFFSET(0x184FBE70)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_4_OFFSET UNITYSDK_OFFSET(0x184FBB60)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_5_OFFSET UNITYSDK_OFFSET(0x184FBBB0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_11_OFFSET UNITYSDK_OFFSET(0x184FBC00)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_12_OFFSET UNITYSDK_OFFSET(0x184FBC50)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_16_OFFSET UNITYSDK_OFFSET(0x184FBCA0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_17_OFFSET UNITYSDK_OFFSET(0x184FBCF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_4_OFFSET UNITYSDK_OFFSET(0x184FBA20)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_5_OFFSET UNITYSDK_OFFSET(0x184FBA70)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_3_OFFSET UNITYSDK_OFFSET(0x184FBAC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_4_OFFSET UNITYSDK_OFFSET(0x184FBB10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 9095;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__60_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x291C0);
		}
		static ::System::Action** StaticGet___9__81_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x291C8);
		}
		static ::System::Action_1<::MiHoYo::SDK::AccountModel*>** StaticGet___9__66_3()
		{
			return (::System::Action_1<::MiHoYo::SDK::AccountModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x291D0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__96_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x291D8);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__32_5()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x291E0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x291E8);
		}
		static ::System::Action_1<::MiHoYo::SDK::AccountModel*>** StaticGet___9__66_4()
		{
			return (::System::Action_1<::MiHoYo::SDK::AccountModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x291F0);
		}
		static ::System::Action** StaticGet___9__62_16()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x291F8);
		}
		static ::System::Action** StaticGet___9__80_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29200);
		}
		static ::System::Action** StaticGet___9__33_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29208);
		}
		static ::System::Action** StaticGet___9__33_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29210);
		}
		static ::MiHoYo::SDK::Win::LoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::LoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29218);
		}
		static ::System::Action** StaticGet___9__79_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29220);
		}
		static ::System::Action** StaticGet___9__77_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29228);
		}
		static ::System::Action** StaticGet___9__62_17()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29230);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__60_5()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29238);
		}
		static ::System::Action** StaticGet___9__62_11()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29240);
		}
		static ::System::Action** StaticGet___9__82_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29248);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__32_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29250);
		}
		static ::System::Action** StaticGet___9__62_12()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x29258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnLogout_b__26_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__ONLOGOUT_B__26_0_OFFSET))(this, a1);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_5(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowPhoneMessageView_b__33_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_3_OFFSET))(this);
		}

		::System::Void _ShowPhoneMessageView_b__33_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_4_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginPluginUI_b__60_4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__60_5(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_5_OFFSET))(this, a1, a2);
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

		::System::Void _ShowAccountListView_b__66_3(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_3_OFFSET))(this, a1);
		}

		::System::Void _ShowAccountListView_b__66_4(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_4_OFFSET))(this, a1);
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

		::System::Void _RequestWebViewRenderMethodAbTestConfig_b__96_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__96_0_OFFSET))(this, a1);
		}
	};
}
