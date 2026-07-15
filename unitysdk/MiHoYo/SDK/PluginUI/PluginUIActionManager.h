#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_DOACTION_OFFSET UNITYSDK_OFFSET(0x194615F0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_GETACTION_OFFSET UNITYSDK_OFFSET(0x19461830)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x194611A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x194613C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_UNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0x19461500)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19461940)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19461320)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIActionManager_TypeDefinitionIndex = 8828;

	class PluginUIActionManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIActionManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIActionManager**)Il2CppClass::FromTypeDefinitionIndex(PluginUIActionManager_TypeDefinitionIndex)->GetStaticField(0x25490);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* m_dicAction; // 0x10
		::System::Int32 m_nActionIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIActionManager* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIActionManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_GETINSTANCE_OFFSET))();
		}

		::System::Int32 RegisterAction(::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_REGISTERACTION_OFFSET))(this, a1);
		}

		::System::Void UnRegisterAction(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_UNREGISTERACTION_OFFSET))(this, a1);
		}

		::System::Void DoAction(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_DOACTION_OFFSET))(this, a1, a2);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* GetAction(::System::Int32 a1)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIACTIONMANAGER_GETACTION_OFFSET))(this, a1);
		}
	};
}
