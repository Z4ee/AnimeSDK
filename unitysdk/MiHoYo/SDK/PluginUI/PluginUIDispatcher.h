#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace MiHoYo::SDK::PluginUI { class IPluginUIService_ShowPluginUITask; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x19467CD0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_MANUALLYSHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x170D5FB0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x170D6090)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONREGISTERTASK_OFFSET UNITYSDK_OFFSET(0x170D6AF0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D6B80)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x19467C40)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIDispatcher_TypeDefinitionIndex = 8818;

	class PluginUIDispatcher : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIDispatcher** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIDispatcher**)Il2CppClass::FromTypeDefinitionIndex(PluginUIDispatcher_TypeDefinitionIndex)->GetStaticField(0x254F0);
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

		::System::Void ManuallyShowPluginUI(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_MANUALLYSHOWPLUGINUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void OnRegisterTask(::System::String* a1, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONREGISTERTASK_OFFSET))(this, a1, a2);
		}
	};
}
