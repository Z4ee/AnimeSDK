#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x170D6770)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x170EC920)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWGRANTMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x170EECA0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x170EDE00)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x170ECD50)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWREALPERSONPLUGINUI_OFFSET UNITYSDK_OFFSET(0x170EFB40)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWSECONDREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x170ED550)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170F06A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x170EC910)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIRealNameService_TypeDefinitionIndex = 8825;

	class PluginUIRealNameService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIRealNameService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIRealNameService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIRealNameService_TypeDefinitionIndex)->GetStaticField(0x25B70);
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

		::System::Void ShowRealNamePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWREALNAMEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowSecondRealNamePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWSECONDREALNAMEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowGrantPhonePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWGRANTPHONEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowGrantMailPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWGRANTMAILPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowRealPersonPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIREALNAMESERVICE_SHOWREALPERSONPLUGINUI_OFFSET))(this, a1, a2);
		}
	};
}
