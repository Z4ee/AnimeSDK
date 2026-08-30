#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x19E7F630)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x19E7F710)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWBINDMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E816C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWGUESTBINDPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E81030)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWMHYBINDPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E809A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWOVERSEABINDACCOUNTPOP_OFFSET UNITYSDK_OFFSET(0x19E7FC00)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWOVERSEAGUESTBINDMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E800B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWOVERSEAVERIFYPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19E81FD0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E82AD0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E7F620)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIBindService_TypeDefinitionIndex = 9083;

	class PluginUIBindService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIBindService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIBindService**)Il2CppClass::FromTypeDefinitionIndex(PluginUIBindService_TypeDefinitionIndex)->GetStaticField(0x19A70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIBindService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIBindService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowOverseaBindAccountPop(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWOVERSEABINDACCOUNTPOP_OFFSET))(this, a1, a2);
		}

		::System::Void ShowOverseaGuestBindMailPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWOVERSEAGUESTBINDMAILPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowMHYBindPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWMHYBINDPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowGuestBindPhonePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWGUESTBINDPHONEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowBindMailPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWBINDMAILPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowOverseaVerifyPhonePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBINDSERVICE_SHOWOVERSEAVERIFYPHONEPLUGINUI_OFFSET))(this, a1, a2);
		}
	};
}
