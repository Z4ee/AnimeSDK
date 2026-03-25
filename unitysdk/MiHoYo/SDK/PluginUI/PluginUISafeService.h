#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x15FA4550)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x15FB6910)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWBINDMOBILEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FB7470)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWDEVICELOGINTIPSPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FB6A20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWVERIFYMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FB7930)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FB7FC0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB6900)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUISafeService_TypeDefinitionIndex = 7764;

	class PluginUISafeService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUISafeService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUISafeService**)Il2CppClass::FromTypeDefinitionIndex(PluginUISafeService_TypeDefinitionIndex)->GetStaticField(0x175D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUISafeService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUISafeService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowDeviceLoginTipsPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWDEVICELOGINTIPSPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowBindMobilePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWBINDMOBILEPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowVerifyMailPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWVERIFYMAILPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}
	};
}
