#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_DOACTION_OFFSET UNITYSDK_OFFSET(0x1C6B21F0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_GETACTION_OFFSET UNITYSDK_OFFSET(0x1C6B2430)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C6B1E40)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x1C6B1FD0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_UNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0x1C6B2110)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B1F40)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIActionManager_TypeDefinitionIndex = 47242;

	class MiHoYoSDKUIActionManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIActionManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::MiHoYoSDKUIActionManager**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIActionManager_TypeDefinitionIndex)->GetStaticField(0x5BCF0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* m_dicAction; // 0x10
		::System::Int32 m_nActionIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIActionManager* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::MiHoYoSDKUIActionManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_GETINSTANCE_OFFSET))();
		}

		::System::Int32 RegisterAction(::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_REGISTERACTION_OFFSET))(this, a1);
		}

		::System::Void UnRegisterAction(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_UNREGISTERACTION_OFFSET))(this, a1);
		}

		::System::Void DoAction(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_DOACTION_OFFSET))(this, a1, a2);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* GetAction(::System::Int32 a1)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_GETACTION_OFFSET))(this, a1);
		}
	};
}
