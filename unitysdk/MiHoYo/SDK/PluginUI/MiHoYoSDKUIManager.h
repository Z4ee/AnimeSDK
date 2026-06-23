#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKBridgeUIElement; }
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKBridgeUIListItem; }
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIContainer; }
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIElement; }
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIListItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ADDTIME_OFFSET UNITYSDK_OFFSET(0x1B7D4910)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BRIDGE2NATIVE_1_OFFSET UNITYSDK_OFFSET(0x1B7D4350)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BRIDGE2NATIVE_2_OFFSET UNITYSDK_OFFSET(0x1B7D3700)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BRIDGE2NATIVE_OFFSET UNITYSDK_OFFSET(0x1B7D4150)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B7D2CC0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_GETNATIVEUICOUNT_OFFSET UNITYSDK_OFFSET(0x1B7D35D0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_GETPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B7D3430)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_GETREGISTEREDPLUGINUINAMES_OFFSET UNITYSDK_OFFSET(0x1B7D3160)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ISREGISTEREDPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B7D35B0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ISUSINGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B7D3410)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_MANUALLYSHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B7D3390)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ONCLOSEUI_OFFSET UNITYSDK_OFFSET(0x1B7D46B0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ONNOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B7D4830)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ONSHOWUI_OFFSET UNITYSDK_OFFSET(0x1B7D4600)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ONUPDATEUI_OFFSET UNITYSDK_OFFSET(0x1B7D4750)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUICLEARACTIONS_OFFSET UNITYSDK_OFFSET(0x1B7D3DB0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUICLOSE_OFFSET UNITYSDK_OFFSET(0x1B7D3C80)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUINOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B7D4110)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUISHOW_OFFSET UNITYSDK_OFFSET(0x1B7D3600)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUIUPDATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1B7D40C0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_REGISTERPLUGINUI_1_OFFSET UNITYSDK_OFFSET(0x1B7D2E80)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_REGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B7D2E60)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7D4970)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7D2B10)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIManager_TypeDefinitionIndex = 37253;

	class MiHoYoSDKUIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIManager_TypeDefinitionIndex)->GetStaticField(0x28400);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer*>* m_dicUIInstance; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* m_lstShowingPluginUI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* m_dicUIActions; // 0x28
		::System::Boolean m_bIsExternalPluginUIRegistered; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_GETINSTANCE_OFFSET))();
		}

		::System::Void RegisterPluginUI(::System::String* strUIName, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_REGISTERPLUGINUI_OFFSET))(this, strUIName, instance);
		}

		::System::Void RegisterPluginUI_1(::System::String* strUIName, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* instance, ::System::Boolean bReplaceIfExist, ::System::Boolean bNotify)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_REGISTERPLUGINUI_1_OFFSET))(this, strUIName, instance, bReplaceIfExist, bNotify);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetRegisteredPluginUINames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_GETREGISTEREDPLUGINUINAMES_OFFSET))(this);
		}

		::System::Void ManuallyShowPluginUI(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_MANUALLYSHOWPLUGINUI_OFFSET))(this, strUIName);
		}

		::System::Boolean IsUsingPluginUI(::System::String* strUIName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ISUSINGPLUGINUI_OFFSET))(this, strUIName);
		}

		::System::Boolean IsRegisteredPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ISREGISTEREDPLUGINUI_OFFSET))(this);
		}

		::System::Int32 GetNativeUICount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_GETNATIVEUICOUNT_OFFSET))(this);
		}

		::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* GetPluginUI(::System::String* strUIName)
		{
			return ((::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_GETPLUGINUI_OFFSET))(this, strUIName);
		}

		::System::Void PluginUIShow(::System::String* strUIName, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement*>* lstElements)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUISHOW_OFFSET))(this, strUIName, lstElements);
		}

		::System::Void PluginUIClose(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUICLOSE_OFFSET))(this, strUIName);
		}

		::System::Void PluginUIClearActions(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUICLEARACTIONS_OFFSET))(this, strUIName);
		}

		::System::Void PluginUIUpdateElements(::System::String* strUIName, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement*>* lstElements)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUIUPDATEELEMENTS_OFFSET))(this, strUIName, lstElements);
		}

		::System::Void PluginUINotifyMessage(::System::String* strUIName, ::System::Int32 nMsgID, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_PLUGINUINOTIFYMESSAGE_OFFSET))(this, strUIName, nMsgID, strParams);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*>* Bridge2Native(::System::String* strUIName, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIListItem*>* lstBirdgeListItems)
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*>*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIListItem*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BRIDGE2NATIVE_OFFSET))(this, strUIName, lstBirdgeListItems);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* Bridge2Native_1(::System::String* strUIName, ::System::Int32 nActionIndex)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BRIDGE2NATIVE_1_OFFSET))(this, strUIName, nActionIndex);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>* Bridge2Native_2(::System::String* strUIName, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement*>* lstBridgeElements)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BRIDGE2NATIVE_2_OFFSET))(this, strUIName, lstBridgeElements);
		}

		::System::Void OnShowUI(::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ONSHOWUI_OFFSET))(this, strArgs);
		}

		::System::Void OnCloseUI(::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ONCLOSEUI_OFFSET))(this, strArgs);
		}

		::System::Void OnUpdateUI(::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ONUPDATEUI_OFFSET))(this, strArgs);
		}

		::System::Void OnNotifyMessage(::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ONNOTIFYMESSAGE_OFFSET))(this, strArgs);
		}

		::System::Collections::IEnumerator* AddTime(::System::Single seconds, ::System::Action* action)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_ADDTIME_OFFSET))(this, seconds, action);
		}
	};
}
