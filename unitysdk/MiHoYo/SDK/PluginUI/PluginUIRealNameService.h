#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C57B370)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1C57B450)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWGRANTMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1C57C930)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1C57C0B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1C57B5E0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWREALPERSONPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1C57D1B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWSECONDREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1C57BB20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C57D8F0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57B360)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIRealNameService_TypeDefinitionIndex = 20900;

	class PluginUIRealNameService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIRealNameService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIRealNameService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIRealNameService_TypeDefinitionIndex)->GetStaticField(0xB5A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIRealNameService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIRealNameService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowRealNamePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWREALNAMEPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowSecondRealNamePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWSECONDREALNAMEPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowGrantPhonePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWGRANTPHONEPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowGrantMailPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWGRANTMAILPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::Void ShowRealPersonPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWREALPERSONPLUGINUI_OFFSET))(this, dicElement2Action, strCustomData);
		}
	};
}
