#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class IPluginUIService_ShowPluginUITask; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_CLOSEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19CA5080)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_CREATESERVICE_OFFSET UNITYSDK_OFFSET(0x19CA4C60)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_DOCLOSEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x19CA4FD0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_DOELEMENTDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x19CA4FF0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_MAKECLOSEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x19CA4EB0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_MAKELISTITEMDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x19CA4F40)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_ONREGISTERTASK_OFFSET UNITYSDK_OFFSET(0x19CA4C80)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_REGISTERTASK_OFFSET UNITYSDK_OFFSET(0x19CA4C90)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_TRYGETELEMENTACTION_OFFSET UNITYSDK_OFFSET(0x19CA4CB0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA5120)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService_TypeDefinitionIndex = 19731;

	class IPluginUIService : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PluginUI::IPluginUIService* m_parentService; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE__CTOR_OFFSET))(this);
		}

		::System::Void CreateService(::MiHoYo::SDK::PluginUI::IPluginUIService* parentService)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::IPluginUIService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_CREATESERVICE_OFFSET))(this, parentService);
		}

		::System::Void OnRegisterTask(::System::String* strUIName, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_ONREGISTERTASK_OFFSET))(this, strUIName, task);
		}

		::System::Void RegisterTask(::System::String* strUIName, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_REGISTERTASK_OFFSET))(this, strUIName, task);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* TryGetElementAction(::System::String* strElementID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::Boolean bIsContainCloseAttr, ::System::String* strUIName)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_TRYGETELEMENTACTION_OFFSET))(this, strElementID, dicElement2Action, bIsContainCloseAttr, strUIName);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* MakeListItemDefaultAction(::System::String* strElementID, ::System::Boolean bIsDelete)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_MAKELISTITEMDEFAULTACTION_OFFSET))(this, strElementID, bIsDelete);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* MakeCloseDefaultAction(::System::String* strUIName, ::System::String* strElementID)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_MAKECLOSEDEFAULTACTION_OFFSET))(this, strUIName, strElementID);
		}

		::System::Void DoCloseDefaultAction(::System::String* strUIName, ::System::String* strElementID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_DOCLOSEDEFAULTACTION_OFFSET))(this, strUIName, strElementID);
		}

		::System::Void ClosePluginUI(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_CLOSEPLUGINUI_OFFSET))(this, strUIName);
		}

		::System::Void DoElementDefaultAction(::System::String* strElementID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_DOELEMENTDEFAULTACTION_OFFSET))(this, strElementID);
		}
	};
}
