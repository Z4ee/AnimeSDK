#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_DOACTION_OFFSET UNITYSDK_OFFSET(0x1CC6E290)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_GETACTION_OFFSET UNITYSDK_OFFSET(0x1CC6E460)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CC6DF00)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x1CC6E090)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_UNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0x1CC6E1D0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC6E5E0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6E000)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIActionManager_TypeDefinitionIndex = 37150;

	class MiHoYoSDKUIActionManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIActionManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::MiHoYoSDKUIActionManager**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIActionManager_TypeDefinitionIndex)->GetStaticField(0x28740);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* m_dicAction; // 0x10
		::System::Int32 m_nActionIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIActionManager* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::MiHoYoSDKUIActionManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_GETINSTANCE_OFFSET))();
		}

		::System::Int32 RegisterAction(::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* action)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_REGISTERACTION_OFFSET))(this, action);
		}

		::System::Void UnRegisterAction(::System::Int32 nActionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_UNREGISTERACTION_OFFSET))(this, nActionIndex);
		}

		::System::Void DoAction(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_DOACTION_OFFSET))(this, strArgs, callback);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* GetAction(::System::Int32 nActionIndex)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIACTIONMANAGER_GETACTION_OFFSET))(this, nActionIndex);
		}
	};
}
