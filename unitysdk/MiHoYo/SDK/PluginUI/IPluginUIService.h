#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class IPluginUIService_ShowPluginUITask; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_CLOSEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E7E6F0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_CREATESERVICE_OFFSET UNITYSDK_OFFSET(0x19E7E100)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_DOCLOSEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x19E7E5E0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_DOELEMENTDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x19E7E600)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_MAKECLOSEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x19E7E470)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_MAKELISTITEMDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x19E7E520)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_ONREGISTERTASK_OFFSET UNITYSDK_OFFSET(0x19E7E190)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_REGISTERTASK_OFFSET UNITYSDK_OFFSET(0x19E7E1A0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_TRYGETELEMENTACTION_OFFSET UNITYSDK_OFFSET(0x19E7E250)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E7EBB0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService_TypeDefinitionIndex = 9089;

	class IPluginUIService : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PluginUI::IPluginUIService* m_parentService; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE__CTOR_OFFSET))(this);
		}

		::System::Void CreateService(::MiHoYo::SDK::PluginUI::IPluginUIService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::IPluginUIService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_CREATESERVICE_OFFSET))(this, a1);
		}

		::System::Void OnRegisterTask(::System::String* a1, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_ONREGISTERTASK_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterTask(::System::String* a1, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_REGISTERTASK_OFFSET))(this, a1, a2);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* TryGetElementAction(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_TRYGETELEMENTACTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* MakeListItemDefaultAction(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_MAKELISTITEMDEFAULTACTION_OFFSET))(this, a1, a2);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* MakeCloseDefaultAction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_MAKECLOSEDEFAULTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void DoCloseDefaultAction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_DOCLOSEDEFAULTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void ClosePluginUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_CLOSEPLUGINUI_OFFSET))(this, a1);
		}

		::System::Void DoElementDefaultAction(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_DOELEMENTDEFAULTACTION_OFFSET))(this, a1);
		}
	};
}
