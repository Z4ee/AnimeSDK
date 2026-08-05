#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BDE5B30)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_ISSHOWGUEST_OFFSET UNITYSDK_OFFSET(0x1BDEAC50)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1BDE5C10)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLISTCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDEE740)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDED0A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDEAF80)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWFLASHLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDE6BC0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLISTCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDEE730)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDED090)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDEAF70)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWMIYOUSHELOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDE6000)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLISTCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDEF120)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDEE720)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDECC80)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWPHONEMESSAGEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDE9870)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWPHONEREGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDEFA70)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWQRLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDE7D00)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWREACTIVATIONPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDECC90)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWSCANCONFIRMLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDE9070)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BDEF130)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDF0110)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE5B20)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUILoginService_TypeDefinitionIndex = 21239;

	class PluginUILoginService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUILoginService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUILoginService**)Il2CppClass::FromTypeDefinitionIndex(PluginUILoginService_TypeDefinitionIndex)->GetStaticField(0x9E10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUILoginService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUILoginService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowMiYouSheLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWMIYOUSHELOGINPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowFlashLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWFLASHLOGINPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowQRLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWQRLOGINPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowScanConfirmLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWSCANCONFIRMLOGINPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowPhoneMessagePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWPHONEMESSAGEPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowInternalAccountLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLOGINPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowOverseaAccountLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLOGINPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowAccountLoginPluginUI(::System::Boolean bIsOversea, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLOGINPLUGINUI_OFFSET))(this, bIsOversea, dicElement2Action, strCustomData);
		}

		::System::Void ShowReactivationPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWREACTIVATIONPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowInternalAccountListPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLISTPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowOverseaAccountListPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLISTPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowAccountListPluginUI(::System::Boolean bIsOversea, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLISTPLUGINUI_OFFSET))(this, bIsOversea, dicElement2Action, strCustomData);
		}

		::System::Void ShowInternalAccountListConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLISTCONFIRMPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowOverseaAccountListConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLISTCONFIRMPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowAccountListConfirmPluginUI(::System::Boolean bIsOversea, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLISTCONFIRMPLUGINUI_OFFSET))(this, bIsOversea, dicElement2Action, strCustomData);
		}

		::System::Void ShowThirdPartyOAuthPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowPhoneRegisterPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWPHONEREGISTERPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Boolean IsShowGuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_ISSHOWGUEST_OFFSET))(this);
		}
	};
}
