#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x17616A70)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_HIDE_OFFSET UNITYSDK_OFFSET(0x17616C70)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_ISUSINGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17616B60)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWELEMENTS_OFFSET UNITYSDK_OFFSET(0x17616D20)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOADINGELEMENETS_OFFSET UNITYSDK_OFFSET(0x176171F0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOADSUCCESSELEMENTS_OFFSET UNITYSDK_OFFSET(0x17617310)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOGININGELEMENTS_OFFSET UNITYSDK_OFFSET(0x17617530)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x176171E0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWNETWORKERRORELEMENTS_OFFSET UNITYSDK_OFFSET(0x17617260)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x17617120)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWOVERDUEELEMENTS_OFFSET UNITYSDK_OFFSET(0x17617380)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODELOADING_OFFSET UNITYSDK_OFFSET(0x17616D10)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODEOVERDUE_OFFSET UNITYSDK_OFFSET(0x176171C0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x17617130)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESSELEMENTS_OFFSET UNITYSDK_OFFSET(0x17617420)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESSSWITCHACCOUNTELEMENTS_OFFSET UNITYSDK_OFFSET(0x176174C0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESS_OFFSET UNITYSDK_OFFSET(0x176171D0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSUPPORTSCANELEMENTS_OFFSET UNITYSDK_OFFSET(0x176175A0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOW_OFFSET UNITYSDK_OFFSET(0x17616BE0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17617650)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17616A60)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int QRLoginPluginUIHelper_TypeDefinitionIndex = 7895;

	class QRLoginPluginUIHelper : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::QRLoginPluginUIHelper** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::QRLoginPluginUIHelper**)Il2CppClass::FromTypeDefinitionIndex(QRLoginPluginUIHelper_TypeDefinitionIndex)->GetStaticField(0x21630);
		}
		// static const ::System::Int32 LOADING_PLACEHOLDER = 0x1; // 0x0
		// static const ::System::Int32 NETWORK_ERROR_PLACEHOLDER = 0x2; // 0x0
		// static const ::System::Int32 LOAD_SUCCESS_PLACEHOLDER = 0x4; // 0x0
		// static const ::System::Int32 OVERDUE_PLACEHOLDER = 0x8; // 0x0
		// static const ::System::Int32 SCAN_SUCCESS_PLACEHOLDER = 0x10; // 0x0
		// static const ::System::Int32 SCAN_SUCCESS_SWITCH_PLACEHOLDER = 0x20; // 0x0
		// static const ::System::Int32 LOGINING_PLACEHOLDER = 0x40; // 0x0
		// static const ::System::Int32 SUPPORT_SCAN_PLACEHOLDER = 0x80; // 0x0
		::System::String* m_strUIName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::QRLoginPluginUIHelper* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::QRLoginPluginUIHelper*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_GETINSTANCE_OFFSET))();
		}

		::System::Boolean IsUsingPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_ISUSINGPLUGINUI_OFFSET))(this);
		}

		::System::Void Show(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOW_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_HIDE_OFFSET))(this);
		}

		::System::Void ShowQRCodeLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODELOADING_OFFSET))(this);
		}

		::System::Void ShowNetworkError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWNETWORKERROR_OFFSET))(this);
		}

		::System::Void ShowQRCode(::System::String* strUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODE_OFFSET))(this, strUrl);
		}

		::System::Void ShowQRCodeOverdue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODEOVERDUE_OFFSET))(this);
		}

		::System::Void ShowScanSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESS_OFFSET))(this);
		}

		::System::Void ShowLoginSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOGINSUCCESS_OFFSET))(this);
		}

		::System::Void ShowElements(::System::Int32 nPlaceHolders)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWELEMENTS_OFFSET))(this, nPlaceHolders);
		}

		::System::Void ShowLoadingElemenets(::System::Collections::Generic::List_1<::System::String*>* lstShowIds, ::System::Collections::Generic::List_1<::System::String*>* lstHideIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOADINGELEMENETS_OFFSET))(this, lstShowIds, lstHideIds, bIsShow);
		}

		::System::Void ShowNetworkErrorElements(::System::Collections::Generic::List_1<::System::String*>* lstShowIds, ::System::Collections::Generic::List_1<::System::String*>* lstHideIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWNETWORKERRORELEMENTS_OFFSET))(this, lstShowIds, lstHideIds, bIsShow);
		}

		::System::Void ShowLoadSuccessElements(::System::Collections::Generic::List_1<::System::String*>* lstShowIds, ::System::Collections::Generic::List_1<::System::String*>* lstHideIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOADSUCCESSELEMENTS_OFFSET))(this, lstShowIds, lstHideIds, bIsShow);
		}

		::System::Void ShowOverdueElements(::System::Collections::Generic::List_1<::System::String*>* lstShowIds, ::System::Collections::Generic::List_1<::System::String*>* lstHideIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWOVERDUEELEMENTS_OFFSET))(this, lstShowIds, lstHideIds, bIsShow);
		}

		::System::Void ShowScanSuccessElements(::System::Collections::Generic::List_1<::System::String*>* lstShowIds, ::System::Collections::Generic::List_1<::System::String*>* lstHideIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESSELEMENTS_OFFSET))(this, lstShowIds, lstHideIds, bIsShow);
		}

		::System::Void ShowScanSuccessSwitchAccountElements(::System::Collections::Generic::List_1<::System::String*>* lstShowIds, ::System::Collections::Generic::List_1<::System::String*>* lstHideIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESSSWITCHACCOUNTELEMENTS_OFFSET))(this, lstShowIds, lstHideIds, bIsShow);
		}

		::System::Void ShowLoginingElements(::System::Collections::Generic::List_1<::System::String*>* lstShowIds, ::System::Collections::Generic::List_1<::System::String*>* lstHideIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOGININGELEMENTS_OFFSET))(this, lstShowIds, lstHideIds, bIsShow);
		}

		::System::Void ShowSupportScanElements(::System::Collections::Generic::List_1<::System::String*>* lstShowIds, ::System::Collections::Generic::List_1<::System::String*>* lstHideIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSUPPORTSCANELEMENTS_OFFSET))(this, lstShowIds, lstHideIds, bIsShow);
		}
	};
}
