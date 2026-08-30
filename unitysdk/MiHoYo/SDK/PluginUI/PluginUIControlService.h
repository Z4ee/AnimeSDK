#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x19E82B50)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x19E82C30)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWALERTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E831E0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E83250)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E83780)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGTOASTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E83960)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWPOPUPDIALOGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E832D0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTIPSBARPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E83BB0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTOASTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E83B50)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E83BF0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E82B40)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIControlService_TypeDefinitionIndex = 9084;

	class PluginUIControlService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIControlService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIControlService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIControlService_TypeDefinitionIndex)->GetStaticField(0x19B20);
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

		::System::Void ShowAlertPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWALERTPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWCONFIRMPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPopupDialogPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWPOPUPDIALOGPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowLoadingPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowLoadingToastPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGTOASTPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowToastPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTOASTPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowTipsbarPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTIPSBARPLUGINUI_OFFSET))(this, a1, a2);
		}
	};
}
