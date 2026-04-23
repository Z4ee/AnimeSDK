#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace MiHoYo::SDK::PluginUI { class IPluginUIService_ShowPluginUITask; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x17601FE0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_MANUALLYSHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17602170)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x17602250)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONREGISTERTASK_OFFSET UNITYSDK_OFFSET(0x176026C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17602750)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x17601F50)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIDispatcher_TypeDefinitionIndex = 7903;

	class PluginUIDispatcher : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIDispatcher** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIDispatcher**)Il2CppClass::FromTypeDefinitionIndex(PluginUIDispatcher_TypeDefinitionIndex)->GetStaticField(0x20710);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask*>* m_dicPluginUIName2ShowTask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIDispatcher* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIDispatcher*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_GETINSTANCE_OFFSET))();
		}

		::System::Void ManuallyShowPluginUI(::System::String* strUIName, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_MANUALLYSHOWPLUGINUI_OFFSET))(this, strUIName, dicElement2Action, strCustomData);
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void OnRegisterTask(::System::String* strUIName, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONREGISTERTASK_OFFSET))(this, strUIName, task);
		}
	};
}
