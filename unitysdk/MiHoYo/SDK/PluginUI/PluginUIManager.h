#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeEventModel; }
namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeNotifyMessageModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLEARACTIONS_OFFSET UNITYSDK_OFFSET(0x183ED7B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x183EDBD0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLOSEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x183EDB60)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x183E8700)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_ISPLUGINUIVISIBLE_OFFSET UNITYSDK_OFFSET(0x183ED3C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_ISUSINGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x183ED200)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_PAUSEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x183ECEC0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_PLUGINUIENABLE_OFFSET UNITYSDK_OFFSET(0x183ED300)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_POP_OFFSET UNITYSDK_OFFSET(0x183EDDC0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_REGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x183ECF60)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_RESUMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x183ECF10)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SAVEACTIONS_OFFSET UNITYSDK_OFFSET(0x183ED510)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SENDPLUGINUIMESSAGE_OFFSET UNITYSDK_OFFSET(0x183E87F0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SENDPLUGINUINOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x183ED9F0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183EDF20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x183ECD50)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIManager_TypeDefinitionIndex = 8915;

	class PluginUIManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIManager**)Il2CppClass::FromTypeDefinitionIndex(PluginUIManager_TypeDefinitionIndex)->GetStaticField(0x1A090);
		}
		::System::Collections::Generic::List_1<::System::String*>* m_lstShowingPluginUI; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* m_dicUIActions; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* m_setPluginUINames; // 0x20
		::System::Boolean m_bIsPluginUIPaused; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIManager* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_GETINSTANCE_OFFSET))();
		}

		::System::Void PausePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_PAUSEPLUGINUI_OFFSET))(this);
		}

		::System::Void ResumePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_RESUMEPLUGINUI_OFFSET))(this);
		}

		::System::Void RegisterPluginUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_REGISTERPLUGINUI_OFFSET))(this, a1);
		}

		::System::Boolean IsUsingPluginUI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_ISUSINGPLUGINUI_OFFSET))(this, a1);
		}

		::System::Boolean PluginUIEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_PLUGINUIENABLE_OFFSET))(this);
		}

		::System::Boolean IsPluginUIVisible(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_ISPLUGINUIVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SaveActions(::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SAVEACTIONS_OFFSET))(this, a1);
		}

		::System::Void ClearActions(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLEARACTIONS_OFFSET))(this, a1);
		}

		::System::Void SendPluginUIMessage(::System::String* a1, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SENDPLUGINUIMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void SendPluginUINotifyMessage(::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SENDPLUGINUINOTIFYMESSAGE_OFFSET))(this, a1);
		}

		::System::Void ClosePluginUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLOSEPLUGINUI_OFFSET))(this, a1);
		}

		::System::Void CloseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLOSEALL_OFFSET))(this);
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_POP_OFFSET))(this);
		}
	};
}
