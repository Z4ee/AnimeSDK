#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x15FA4630)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x15FA48D0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_SHOWGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA49E0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_SHOWOVERSEAGRANTMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA5110)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_SHOWOVERSEAGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FA5A90)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FA6410)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA48C0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIGrantService_TypeDefinitionIndex = 7754;

	class PluginUIGrantService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIGrantService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIGrantService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIGrantService_TypeDefinitionIndex)->GetStaticField(0x16A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIGrantService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIGrantService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowGrantPhonePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_SHOWGRANTPHONEPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowOverseaGrantMailPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_SHOWOVERSEAGRANTMAILPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowOverseaGrantPhonePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIGRANTSERVICE_SHOWOVERSEAGRANTPHONEPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}
	};
}
