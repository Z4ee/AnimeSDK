#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeEventModel; }
namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeNotifyMessageModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLEARACTIONS_OFFSET UNITYSDK_OFFSET(0x1A3538E0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x1A353F90)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLOSEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A353F20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A352F00)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_ISPLUGINUIVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A353580)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_ISUSINGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A353390)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_PAUSEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A352FF0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_PLUGINUIENABLE_OFFSET UNITYSDK_OFFSET(0x1A3534C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_POP_OFFSET UNITYSDK_OFFSET(0x1A354170)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_REGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A353090)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_RESUMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A353040)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SAVEACTIONS_OFFSET UNITYSDK_OFFSET(0x1A353670)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SENDPLUGINUIMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A353B80)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SENDPLUGINUINOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A353E40)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3542B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A352D60)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIManager_TypeDefinitionIndex = 19839;

	class PluginUIManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIManager**)Il2CppClass::FromTypeDefinitionIndex(PluginUIManager_TypeDefinitionIndex)->GetStaticField(0xB1B0);
		}
		::System::Collections::Generic::HashSet_1<::System::String*>* m_setPluginUINames; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* m_dicUIActions; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* m_lstShowingPluginUI; // 0x20
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

		::System::Void RegisterPluginUI(::System::String* strPrams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_REGISTERPLUGINUI_OFFSET))(this, strPrams);
		}

		::System::Boolean IsUsingPluginUI(::System::String* strUIName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_ISUSINGPLUGINUI_OFFSET))(this, strUIName);
		}

		::System::Boolean PluginUIEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_PLUGINUIENABLE_OFFSET))(this);
		}

		::System::Boolean IsPluginUIVisible(::System::String* strUIName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_ISPLUGINUIVISIBLE_OFFSET))(this, strUIName);
		}

		::System::Void SaveActions(::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel* bridgeModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SAVEACTIONS_OFFSET))(this, bridgeModel);
		}

		::System::Void ClearActions(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLEARACTIONS_OFFSET))(this, strUIName);
		}

		::System::Void SendPluginUIMessage(::System::String* strMsgName, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel* bridgeModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SENDPLUGINUIMESSAGE_OFFSET))(this, strMsgName, bridgeModel);
		}

		::System::Void SendPluginUINotifyMessage(::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel* bridgeModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_SENDPLUGINUINOTIFYMESSAGE_OFFSET))(this, bridgeModel);
		}

		::System::Void ClosePluginUI(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIMANAGER_CLOSEPLUGINUI_OFFSET))(this, strUIName);
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
