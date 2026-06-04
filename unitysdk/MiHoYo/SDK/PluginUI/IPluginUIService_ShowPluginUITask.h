#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183D5660)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183D56A0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_INVOKE_OFFSET UNITYSDK_OFFSET(0x183D5650)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK__CTOR_OFFSET UNITYSDK_OFFSET(0x183D5560)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService_ShowPluginUITask_TypeDefinitionIndex = 8808;

	class IPluginUIService_ShowPluginUITask : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
