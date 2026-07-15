#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x19465F60)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x19466040)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_SHOWOVERSEACONSENTBANNERMANAGEPREFERENCESPLUGINUI_OFFSET UNITYSDK_OFFSET(0x194669E0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_SHOWOVERSEACONSENTBANNERPRIVACYPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19466230)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19467C20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19465F50)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIDataSecurityService_TypeDefinitionIndex = 8811;

	class PluginUIDataSecurityService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIDataSecurityService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIDataSecurityService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIDataSecurityService_TypeDefinitionIndex)->GetStaticField(0x254E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIDataSecurityService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIDataSecurityService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowOverseaConsentBannerPrivacyPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_SHOWOVERSEACONSENTBANNERPRIVACYPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowOverseaConsentBannerManagePreferencesPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_SHOWOVERSEACONSENTBANNERMANAGEPREFERENCESPLUGINUI_OFFSET))(this, a1, a2);
		}
	};
}
