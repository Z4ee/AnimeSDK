#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x176108D0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x176109B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x176119A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17611270)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLRECONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17610AC0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17612240)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x176108C0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIProtocolService_TypeDefinitionIndex = 7909;

	class PluginUIProtocolService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIProtocolService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIProtocolService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIProtocolService_TypeDefinitionIndex)->GetStaticField(0x212A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIProtocolService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIProtocolService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowProtocolReConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLRECONFIRMPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowProtocolPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowOverseaProtocolPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}
	};
}
