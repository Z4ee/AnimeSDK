#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8DA8070)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8DA80E0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8DA8140)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8DA80F0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DA8060)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x8DA7CB0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIManager__AddTime_d__22_TypeDefinitionIndex = 43439;

	class MiHoYoSDKUIManager__AddTime_d__22 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action* action; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single seconds; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER__ADDTIME_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
