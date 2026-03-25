#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x15FA1BE0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x15FA1CC0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWALERTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA1ED0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA1F40)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA22C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGTOASTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA2480)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWPOPUPDIALOGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA1FC0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTIPSBARPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA26B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTOASTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA2650)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FA26F0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA1BD0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIControlService_TypeDefinitionIndex = 7752;

	class PluginUIControlService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIControlService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIControlService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIControlService_TypeDefinitionIndex)->GetStaticField(0x166C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIControlService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIControlService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowAlertPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWALERTPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWCONFIRMPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowPopupDialogPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWPOPUPDIALOGPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowLoadingPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowLoadingToastPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGTOASTPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowToastPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTOASTPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowTipsbarPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTIPSBARPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}
	};
}
