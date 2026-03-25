#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x15FA4710)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x15FB2590)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FB3580)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FB2E50)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLRECONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15FB26A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FB42A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB2580)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIProtocolService_TypeDefinitionIndex = 7762;

	class PluginUIProtocolService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIProtocolService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIProtocolService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIProtocolService_TypeDefinitionIndex)->GetStaticField(0x172F0);
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
